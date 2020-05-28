// Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Week8_class1.h"
#include "Dlg.h"
#include "afxdialogex.h"
#include "Week8_class1Doc.h"
#include "resource.h"


// Dlg 对话框

IMPLEMENT_DYNAMIC(Dlg, CDialogEx)

Dlg::Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, filename(_T(""))
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, filename);
	DDX_Control(pDX, IDC_LIST1, lbox);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &Dlg::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// Dlg 消息处理程序




void Dlg::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
	
}


BOOL Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	lbox.AddString(filename);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
