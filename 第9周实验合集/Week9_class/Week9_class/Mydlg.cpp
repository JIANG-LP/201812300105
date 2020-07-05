// Mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Week9_class.h"
#include "Mydlg.h"
#include "afxdialogex.h"
#include <fstream>
#include <string>
using namespace std;

// Mydlg 对话框

IMPLEMENT_DYNAMIC(Mydlg, CDialogEx)

Mydlg::Mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Mydlg::~Mydlg()
{
}

void Mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg::OnShowp)
END_MESSAGE_MAP()


// Mydlg 消息处理程序


void Mydlg::OnShowp()
{
	// TODO: 在此添加控件通知处理程序代码
	CClientDC dc(this);
	CFileDialog cfd(true);
	string s;
	if (cfd.DoModal() == IDOK)
	{
		ifstream ifs(cfd.GetPathName());
		while (ifs >> s)
		{
			ss = CString(s.c_str());
			CImage image;
			image.Load(ss);
			CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
			image.Draw(pDC->m_hDC, 0, 0, image.GetWidth(), image.GetHeight());
		}
	}
}
