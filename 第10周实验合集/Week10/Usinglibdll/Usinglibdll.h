
// Usinglibdll.h : Usinglibdll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsinglibdllApp:
// �йش����ʵ�֣������ Usinglibdll.cpp
//

class CUsinglibdllApp : public CWinApp
{
public:
	CUsinglibdllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsinglibdllApp theApp;
