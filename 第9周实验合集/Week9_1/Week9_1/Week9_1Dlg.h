
// Week9_1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CWeek9_1Dlg �Ի���
class CWeek9_1Dlg : public CDialogEx
{
// ����
public:
	CWeek9_1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK9_1_DIALOG };
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
	CListBox LBox;
	CString Name;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnChange();
};
