// Mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Week7_class2.h"
#include "Mydlg.h"
#include "afxdialogex.h"


// Mydlg 对话框

IMPLEMENT_DYNAMIC(Mydlg, CDialogEx)

Mydlg::Mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
	, s2(_T(""))
{

}

Mydlg::~Mydlg()
{
}

void Mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, s1);
	DDX_Text(pDX, IDC_EDIT4, s2);
}


BEGIN_MESSAGE_MAP(Mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg 消息处理程序


void Mydlg::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString s3;
	s3 = s1;
	s1 = s2;
	s2 = s3;
	this->UpdateData(false);
}
