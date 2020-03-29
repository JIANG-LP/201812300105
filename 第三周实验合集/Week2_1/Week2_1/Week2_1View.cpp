
// Week2_1View.cpp : CWeek2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_1.h"
#endif

#include "Week2_1Doc.h"
#include "Week2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_1View

IMPLEMENT_DYNCREATE(CWeek2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek2_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek2_1View ����/����

CWeek2_1View::CWeek2_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_1View::~CWeek2_1View()
{
}

BOOL CWeek2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_1View ����

void CWeek2_1View::OnDraw(CDC* pDC)
{
	CWeek2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(pDoc->pointx, pDoc->pointy, pDoc->s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek2_1View ���

#ifdef _DEBUG
void CWeek2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_1Doc* CWeek2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_1Doc)));
	return (CWeek2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_1View ��Ϣ�������


void CWeek2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CClientDC dc(this);
	CWeek2_1Doc* pDoc = GetDocument();
	pDoc->s = _T("�����������");
	pDoc->pointx = point.x;
	pDoc->pointy = point.y;
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CWeek2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek2_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->s = _T("�����̧��");
	pDoc->pointx = point.x;
	pDoc->pointy = point.y;
	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
