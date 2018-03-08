// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// 某些 CString 构造函数将是显式的


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include "afxwin.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include <afxwin.h>
#include <afxext.h>
#include <afxole.h>
#include <afxodlgs.h>
#include <afxrich.h>
#include <afxhtml.h>
#include <afxcview.h>
#include <afxwinappex.h>
#include <afxframewndex.h>
#include <afxmdiframewndex.h>

#import "libid:AC0714F2-3D04-11D1-AE7D-00A0C90F26F4" raw_interfaces_only, raw_native_types,  named_guids,rename("FONTSIZE","ADDNDRFONTSIZE") auto_search \
	rename_namespace("AddInDesignerObjects")
using namespace AddInDesignerObjects;

#ifdef _WIN64
#import "3rd_x64\MSO.DLL" raw_interfaces_only, raw_native_types,  named_guids, auto_search rename("IAccessible","OfficeIAccessible") \
	rename("Shape","OfficeShpae") \
	rename("RGB","OfficeRGB") \
	rename_namespace("Office")
using namespace Office;

#import "3rd_x64\VBE6EXT.OLB" rename_namespace("VBIDE")
using namespace VBIDE;

#import "3rd_x64\MSPPT.OLB" auto_search raw_interfaces_only, raw_native_types, named_guids, exclude("ColorFormat","PrintOptions"), exclude("Adjustments","PictureFormat"), exclude("FillFormat"), exclude("TextFrame"), exclude("EffectParameters"), exclude("TextFrame2"), exclude("ChartColorFormat"), exclude("ChartFillFormat"), exclude("ChartFont"), exclude("LegendEntry"), exclude("SeriesCollection"), exclude("Axes"), exclude("Trendlines"), exclude("ChartGroups"), exclude("Points"), exclude("FullSeriesCollection"), exclude("CategoryCollection"), exclude("Shapes"), exclude("FreeformBuilder"), exclude("Shape"), exclude("ConnectorFormat"), exclude("ShapeRange"), exclude("GroupShapes"), exclude("CanvasShapes"), exclude("DiagramNode"), exclude("DiagramNodeChildren"), exclude("TextEffectFormat"), exclude("ShadowFormat"), exclude("LineFormat"),rename("FontPtr","PPTFontPtr")  rename("Font","PPTFont") rename("ThreeDFormat","PPTThreeDFormat") \
	rename("CalloutFormat","PPTCalloutFormat") \
	rename("ShapeNode","PPTShapeNode") \
	rename("ShapeNodes","PPTShapeNodes") \
	rename("DiagramNodes","PPTDiagramNodes") \
	rename("IID_AddIn","IID_AddIn1") \
	rename("LegendEntries","PPTLegendEntries") \
	rename_namespace("MSPPT")
using namespace MSPPT;
#else
#import "3rd_x86\MSO.DLL" raw_interfaces_only, raw_native_types,  named_guids, auto_search rename("IAccessible","OfficeIAccessible") \
	rename("Shape","OfficeShpae") \
	rename("RGB","OfficeRGB") \
	rename_namespace("Office")
using namespace Office;

#import "3rd_x86\VBE6EXT.OLB" rename_namespace("VBIDE")
using namespace VBIDE;

#import "3rd_x86\MSPPT.OLB" auto_search raw_interfaces_only, raw_native_types, named_guids, exclude("ColorFormat","PrintOptions"), exclude("Adjustments","PictureFormat"), exclude("FillFormat"), exclude("TextFrame"), exclude("EffectParameters"), exclude("TextFrame2"), exclude("ChartColorFormat"), exclude("ChartFillFormat"), exclude("ChartFont"), exclude("LegendEntry"), exclude("SeriesCollection"), exclude("Axes"), exclude("Trendlines"), exclude("ChartGroups"), exclude("Points"), exclude("FullSeriesCollection"), exclude("CategoryCollection"), exclude("Shapes"), exclude("FreeformBuilder"), exclude("Shape"), exclude("ConnectorFormat"), exclude("ShapeRange"), exclude("GroupShapes"), exclude("CanvasShapes"), exclude("DiagramNode"), exclude("DiagramNodeChildren"), exclude("TextEffectFormat"), exclude("ShadowFormat"), exclude("LineFormat"),rename("FontPtr","PPTFontPtr")  rename("Font","PPTFont") rename("ThreeDFormat","PPTThreeDFormat") \
	rename("CalloutFormat","PPTCalloutFormat") \
	rename("ShapeNode","PPTShapeNode") \
	rename("ShapeNodes","PPTShapeNodes") \
	rename("DiagramNodes","PPTDiagramNodes") \
	rename("IID_AddIn","IID_AddIn1") \
	rename("LegendEntries","PPTLegendEntries") \
	rename_namespace("MSPPT")
using namespace MSPPT;
#endif



