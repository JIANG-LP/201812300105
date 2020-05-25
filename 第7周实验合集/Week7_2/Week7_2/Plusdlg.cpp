// Plusdlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Week7_2.h"
#include "Plusdlg.h"
#include "afxdialogex.h"


// Plusdlg 对话框

IMPLEMENT_DYNAMIC(Plusdlg, CDialogEx)

Plusdlg::Plusdlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

Plusdlg::~Plusdlg()
{
}

void Plusdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(Plusdlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Plusdlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Plusdlg 消息处理程序


void Plusdlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = a + b;
	this->UpdateData(false);
}
