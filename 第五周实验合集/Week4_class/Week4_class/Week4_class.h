
// Week4_class.h : Week4_class Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek4_classApp:
// �йش����ʵ�֣������ Week4_class.cpp
//

class CWeek4_classApp : public CWinApp
{
public:
	CWeek4_classApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek4_classApp theApp;
