// dllmain.h : 模块类的声明。

class CNativeAddInModule : public ATL::CAtlDllModuleT< CNativeAddInModule >
{
public :
	DECLARE_LIBID(LIBID_NativeAddInLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NATIVEADDIN, "{99D281DF-67CE-4697-B08B-611F6358D64C}")
};

extern class CNativeAddInModule _AtlModule;
