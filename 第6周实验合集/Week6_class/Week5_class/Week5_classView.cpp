
// Week5_classView.cpp : CWeek5_classView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_class.h"
#endif

#include "Week5_classDoc.h"
#include "Week5_classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_classView

IMPLEMENT_DYNCREATE(CWeek5_classView, CView)

BEGIN_MESSAGE_MAP(CWeek5_classView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek5_classView::OnFileOpen)
END_MESSAGE_MAP()

// CWeek5_classView ����/����

CWeek5_classView::CWeek5_classView()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek5_classView::~CWeek5_classView()
{
}

BOOL CWeek5_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_classView ����

void CWeek5_classView::OnDraw(CDC* pDC)
{
	CWeek5_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_classView ���

#ifdef _DEBUG
void CWeek5_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_classDoc* CWeek5_classView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_classDoc)));
	return (CWeek5_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_classView ��Ϣ�������


void CWeek5_classView::OnFileOpen()
{
	// TODO: �ڴ���������������

	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal();  //�����Ի���
	CClientDC dc(this);
	if(r==IDOK)
	{
		CString filename = cfd.GetPathName();
		//dc.TextOutW(300, 200, filename);

		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
