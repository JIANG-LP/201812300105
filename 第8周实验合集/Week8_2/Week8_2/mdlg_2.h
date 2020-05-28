#pragma once


// mdlg_2 对话框

class mdlg_2 : public CDialogEx
{
	DECLARE_DYNAMIC(mdlg_2)

public:
	mdlg_2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mdlg_2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int red;
	int green;
	int blue;
};
