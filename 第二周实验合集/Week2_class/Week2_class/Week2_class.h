
// Week2_class.h : Week2_class Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek2_classApp:
// �йش����ʵ�֣������ Week2_class.cpp
//

class CWeek2_classApp : public CWinApp
{
public:
	CWeek2_classApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek2_classApp theApp;
