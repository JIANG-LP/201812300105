// Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week8_class1.h"
#include "Dlg.h"
#include "afxdialogex.h"
#include "Week8_class1Doc.h"
#include "resource.h"


// Dlg �Ի���

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


// Dlg ��Ϣ�������




void Dlg::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
}


BOOL Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	lbox.AddString(filename);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
