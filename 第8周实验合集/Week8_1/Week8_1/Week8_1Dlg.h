
// Week8_1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CWeek8_1Dlg �Ի���
class CWeek8_1Dlg : public CDialogEx
{
// ����
public:
	CWeek8_1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK8_1_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	double result;
	double input;
	afx_msg void onPlus();
	afx_msg void OnSub();

	afx_msg void OnMul();
	afx_msg void OnDiv();
	double input2;

	afx_msg void OnSqrt();
	afx_msg void OnRep();
};
