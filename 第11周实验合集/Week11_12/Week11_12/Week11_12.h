
// Week11_12.h : Week11_12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek11_12App:
// �йش����ʵ�֣������ Week11_12.cpp
//

class CWeek11_12App : public CWinApp
{
public:
	CWeek11_12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek11_12App theApp;
