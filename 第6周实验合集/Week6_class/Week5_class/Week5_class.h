
// Week5_class.h : Week5_class Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek5_classApp:
// �йش����ʵ�֣������ Week5_class.cpp
//

class CWeek5_classApp : public CWinApp
{
public:
	CWeek5_classApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek5_classApp theApp;
