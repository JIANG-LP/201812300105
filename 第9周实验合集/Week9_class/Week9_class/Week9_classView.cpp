
// Week9_classView.cpp : CWeek9_classView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week9_class.h"
#endif

#include "Week9_classDoc.h"
#include "Week9_classView.h"
#include <fstream>
#include"Mydlg.h"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9_classView

IMPLEMENT_DYNCREATE(CWeek9_classView, CView)

BEGIN_MESSAGE_MAP(CWeek9_classView, CView)
	ON_COMMAND(ID_32771, &CWeek9_classView::OnFileName)
	ON_COMMAND(ID_FILE_SAVE, &CWeek9_classView::OnFileSave)
	ON_COMMAND(ID_FILE_OPEN, &CWeek9_classView::OnFileOpen)


END_MESSAGE_MAP()

// CWeek9_classView ����/����

CWeek9_classView::CWeek9_classView()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek9_classView::~CWeek9_classView()
{
}

BOOL CWeek9_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek9_classView ����

void CWeek9_classView::OnDraw(CDC* /*pDC*/)
{
	CWeek9_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek9_classView ���

#ifdef _DEBUG
void CWeek9_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9_classDoc* CWeek9_classView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9_classDoc)));
	return (CWeek9_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9_classView ��Ϣ�������


void CWeek9_classView::OnFileName()
{
	// TODO: �ڴ���������������
	CWeek9_classDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if(r==IDOK)
	{
		pDoc->filename=cfd.GetPathName();
		dc.TextOutW(300, 300, pDoc->filename);
	}
}


void CWeek9_classView::OnFileSave()
{
	// TODO: �ڴ���������������
	CWeek9_classDoc* pDoc = GetDocument();
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs("C:\\Users\\JIANG-LP\\Desktop\\abc.txt");
		ofs << CT2A(pDoc->filename) << endl;
	}
}


void CWeek9_classView::OnFileOpen()
{
	// TODO: �ڴ���������������
	Mydlg dlg;
	int r = dlg.DoModal();

}

