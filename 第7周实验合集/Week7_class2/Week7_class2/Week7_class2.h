
// Week7_class2.h : Week7_class2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek7_class2App:
// �йش����ʵ�֣������ Week7_class2.cpp
//

class CWeek7_class2App : public CWinApp
{
public:
	CWeek7_class2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek7_class2App theApp;
