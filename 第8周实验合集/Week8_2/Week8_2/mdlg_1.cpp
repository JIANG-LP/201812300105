// mdlg_1.cpp : 实现文件
//

#include "stdafx.h"
#include "Week8_2.h"
#include "mdlg_1.h"
#include "afxdialogex.h"


// mdlg_1 对话框

IMPLEMENT_DYNAMIC(mdlg_1, CDialogEx)

mdlg_1::mdlg_1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, left(0)
	, right(0)
	, top(0)
	, bottom(0)
{

}

mdlg_1::~mdlg_1()
{
}

void mdlg_1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, left);
	DDX_Text(pDX, IDC_EDIT1, right);
	DDX_Text(pDX, IDC_EDIT2, top);
	DDX_Text(pDX, IDC_EDIT4, bottom);
}


BEGIN_MESSAGE_MAP(mdlg_1, CDialogEx)
END_MESSAGE_MAP()


// mdlg_1 消息处理程序
