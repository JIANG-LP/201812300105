
// Week3_1View.cpp : CWeek3_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_1.h"
#endif

#include "Week3_1Doc.h"
#include "Week3_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_1View

IMPLEMENT_DYNCREATE(CWeek3_1View, CView)

BEGIN_MESSAGE_MAP(CWeek3_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CWeek3_1View ����/����

CWeek3_1View::CWeek3_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek3_1View::~CWeek3_1View()
{
}

BOOL CWeek3_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_1View ����

void CWeek3_1View::OnDraw(CDC* pDC)
{
	CWeek3_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("(%d,%d)"),x,y);
	pDC->Rectangle(pDoc->r);
	pDC->TextOutW(x,y,s);
	if (flag == 0) {
		pDoc->r.left = 0;
		pDoc->r.right = 0;
		pDoc->r.top = 0;
		pDoc->r.bottom = 0;
	}
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_1View ���

#ifdef _DEBUG
void CWeek3_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_1Doc* CWeek3_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_1Doc)));
	return (CWeek3_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_1View ��Ϣ�������


void CWeek3_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_1Doc* pDoc = GetDocument();
	pDoc->r.left = point.x;
	pDoc->r.top = point.y;

	
	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_1Doc* pDoc = GetDocument();
	
	flag = 0;
	InvalidateRect(NULL, true);

	CView::OnLButtonUp(nFlags, point);
}


void CWeek3_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_1Doc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON) {
		pDoc->r.right = point.x;
		pDoc->r.bottom = point.y;
		x= point.x;
		y = point.y;
		Invalidate();
		flag = 1;
	}
	CView::OnMouseMove(nFlags, point);
}
