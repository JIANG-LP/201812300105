// mdlg_2.cpp : 实现文件
//

#include "stdafx.h"
#include "Week8_2.h"
#include "mdlg_2.h"
#include "afxdialogex.h"


// mdlg_2 对话框

IMPLEMENT_DYNAMIC(mdlg_2, CDialogEx)

mdlg_2::mdlg_2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, red(0)
	, green(0)
	, blue(0)
{

}

mdlg_2::~mdlg_2()
{
}

void mdlg_2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, red);
	DDV_MinMaxInt(pDX, red, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, green);
	DDV_MinMaxInt(pDX, green, 0, 255);
	DDX_Text(pDX, IDC_EDIT3, blue);
	DDV_MinMaxInt(pDX, blue, 0, 255);
}


BEGIN_MESSAGE_MAP(mdlg_2, CDialogEx)
END_MESSAGE_MAP()


// mdlg_2 消息处理程序
