
// Week8_1Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CWeek8_1Dlg 对话框
class CWeek8_1Dlg : public CDialogEx
{
// 构造
public:
	CWeek8_1Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK8_1_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
