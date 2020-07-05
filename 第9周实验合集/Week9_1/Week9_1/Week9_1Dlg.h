
// Week9_1Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CWeek9_1Dlg 对话框
class CWeek9_1Dlg : public CDialogEx
{
// 构造
public:
	CWeek9_1Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK9_1_DIALOG };
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
	CListBox LBox;
	CString Name;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnChange();
};
