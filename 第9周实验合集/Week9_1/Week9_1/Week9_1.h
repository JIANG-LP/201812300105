
// Week9_1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWeek9_1App: 
// �йش����ʵ�֣������ Week9_1.cpp
//

class CWeek9_1App : public CWinApp
{
public:
	CWeek9_1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWeek9_1App theApp;