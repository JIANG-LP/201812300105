
// Week2_3plus.h : Week2_3plus Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek2_3plusApp:
// �йش����ʵ�֣������ Week2_3plus.cpp
//

class CWeek2_3plusApp : public CWinApp
{
public:
	CWeek2_3plusApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek2_3plusApp theApp;
