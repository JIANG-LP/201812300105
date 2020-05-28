#pragma once


// mdlg_1 对话框

class mdlg_1 : public CDialogEx
{
	DECLARE_DYNAMIC(mdlg_1)

public:
	mdlg_1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mdlg_1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int left;
	int right;
	int top;
	int bottom;
};
