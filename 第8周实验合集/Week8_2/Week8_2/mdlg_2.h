#pragma once


// mdlg_2 �Ի���

class mdlg_2 : public CDialogEx
{
	DECLARE_DYNAMIC(mdlg_2)

public:
	mdlg_2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mdlg_2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int red;
	int green;
	int blue;
};
