// Mydlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week9_class.h"
#include "Mydlg.h"
#include "afxdialogex.h"
#include <fstream>
#include <string>
using namespace std;

// Mydlg �Ի���

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


// Mydlg ��Ϣ�������


void Mydlg::OnShowp()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
