// Mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Week7_4.h"
#include "Mydlg.h"
#include "afxdialogex.h"


// Mydlg 对话框

IMPLEMENT_DYNAMIC(Mydlg, CDialogEx)

Mydlg::Mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T("字符"))
	, a(2)
	, s3(_T(""))
{

}

Mydlg::~Mydlg()
{
}

void Mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s1);
	DDX_Text(pDX, IDC_EDIT2, a);
	DDX_Text(pDX, IDC_EDIT3, s3);
}


BEGIN_MESSAGE_MAP(Mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg 消息处理程序


void Mydlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	CString s2;
	
	this->UpdateData(true);
	s2.Format(_T("%d"), a);
	s3 = s1 + s2;
	this->UpdateData(false);

}
