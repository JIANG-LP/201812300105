
// Week3_2View.cpp : CWeek3_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_2.h"
#endif

#include "Week3_2Doc.h"
#include "Week3_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_2View

IMPLEMENT_DYNCREATE(CWeek3_2View, CView)

BEGIN_MESSAGE_MAP(CWeek3_2View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek3_2View ����/����

CWeek3_2View::CWeek3_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek3_2View::~CWeek3_2View()
{
}

BOOL CWeek3_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_2View ����

void CWeek3_2View::OnDraw(CDC* pDC)
{
	CWeek3_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("MouseMove�ƶ���:%d��,�����ƶ�%f�����ط���һ��"),pDoc->count,(float)(x2-x1)/pDoc->count);
	pDC->TextOutW(500,300,s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_2View ���

#ifdef _DEBUG
void CWeek3_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_2Doc* CWeek3_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_2Doc)));
	return (CWeek3_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_2View ��Ϣ�������


void CWeek3_2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_2Doc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON)
	{
		pDoc->count++;

	}

	CView::OnMouseMove(nFlags, point);
}


void CWeek3_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x1 = point.x;

	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x2 = point.x;

	InvalidateRect(NULL,false);
	CView::OnLButtonUp(nFlags, point);
}
