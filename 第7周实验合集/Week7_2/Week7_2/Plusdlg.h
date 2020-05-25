#pragma once


// Plusdlg 对话框

class Plusdlg : public CDialogEx
{
	DECLARE_DYNAMIC(Plusdlg)

public:
	Plusdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Plusdlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int c;
	afx_msg void OnBnClickedButton1();
};
