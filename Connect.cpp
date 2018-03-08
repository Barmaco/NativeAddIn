// Connect.cpp : CConnect 的实现

#include "stdafx.h"
#include "Connect.h"

// CConnect

//CRibbonUI CConnect::m_ribbonUI = NULL;
CComBSTR CConnect::loginLable = CComBSTR("NotLogged");

STDMETHODIMP CConnect::GetImage( BSTR *pbstrImageId,IPictureDisp ** ppdispImage )
{	
	using namespace Gdiplus;
	int pngId(0);
	try
	{
		//test
		pngId = 204;
	}
	catch(...)
	{
		return E_UNEXPECTED;
	}
	LPVOID pResourceData = NULL;
	DWORD len = 0;
	HRESULT hr = HrGetResource(pngId,_T("PNG"), &pResourceData, &len);

	BYTE* lpRsrc = reinterpret_cast<BYTE*>(pResourceData);
	if (!lpRsrc)
	{
		return E_UNEXPECTED;
	}


	HGLOBAL m_hMem = GlobalAlloc(GMEM_FIXED, len);
	BYTE* pmem = (BYTE*)GlobalLock(m_hMem);
	memcpy(pmem,lpRsrc,len);
	GlobalUnlock(m_hMem);
	IStream* pstm;
	CreateStreamOnHGlobal(m_hMem,FALSE,&pstm);


	PICTDESC pic;
	memset(&pic, 0, sizeof pic);
	Bitmap *png = Bitmap::FromStream(pstm);
	HBITMAP hMap = NULL;
	png->GetHBITMAP(Color(),&hMap);
	pic.picType =  PICTYPE_BITMAP;
	pic.bmp.hbitmap = hMap;


	OleCreatePictureIndirect(&pic,IID_IPictureDisp,true,(LPVOID*)ppdispImage);
	return S_OK;
}

STDMETHODIMP CConnect::GetLabel( IDispatch* ribbonCtrl, BSTR * RibbonXml )
{
	CComBSTR xml = loginLable.Copy();
	CComBSTR crlf = _T("\r\n");//add by ljm 强制换行
	xml.AppendBSTR(crlf);
	*RibbonXml = xml.Copy();
	return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
}

STDMETHODIMP CConnect::LoginButtonClicked( IDispatch* ribbon )
{
	CConnect::loginLable = CComBSTR(_T("Logged"));
	m_ribbonUI.InvalidateControl(_T("LoginButton"));

	return S_OK;
}
