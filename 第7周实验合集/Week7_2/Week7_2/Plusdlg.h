#pragma once


// Plusdlg �Ի���

class Plusdlg : public CDialogEx
{
	DECLARE_DYNAMIC(Plusdlg)

public:
	Plusdlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Plusdlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int c;
	afx_msg void OnBnClickedButton1();
};
