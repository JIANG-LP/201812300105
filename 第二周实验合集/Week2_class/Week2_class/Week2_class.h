
// Week2_class.h : Week2_class 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CWeek2_classApp:
// 有关此类的实现，请参阅 Week2_class.cpp
//

class CWeek2_classApp : public CWinApp
{
public:
	CWeek2_classApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek2_classApp theApp;
