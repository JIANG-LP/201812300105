#pragma once


// mdlg_1 �Ի���

class mdlg_1 : public CDialogEx
{
	DECLARE_DYNAMIC(mdlg_1)

public:
	mdlg_1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mdlg_1();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int left;
	int right;
	int top;
	int bottom;
};
