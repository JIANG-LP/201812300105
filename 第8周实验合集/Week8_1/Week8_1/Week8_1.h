
// Week8_1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWeek8_1App: 
// �йش����ʵ�֣������ Week8_1.cpp
//

class CWeek8_1App : public CWinApp
{
public:
	CWeek8_1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWeek8_1App theApp;