
// Week9_class.h : Week9_class Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek9_classApp:
// �йش����ʵ�֣������ Week9_class.cpp
//

class CWeek9_classApp : public CWinApp
{
public:
	CWeek9_classApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9_classApp theApp;
