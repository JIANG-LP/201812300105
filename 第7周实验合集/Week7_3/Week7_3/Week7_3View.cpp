
// Week7_3View.cpp : CWeek7_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_3.h"
#endif

#include "Week7_3Doc.h"
#include "Week7_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_3View

IMPLEMENT_DYNCREATE(CWeek7_3View, CView)

BEGIN_MESSAGE_MAP(CWeek7_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek7_3View ����/����

CWeek7_3View::CWeek7_3View()
{
	// TODO: �ڴ˴���ӹ������
	cr.top = 200;
	cr.bottom = 300;
	cr.left = 50;
	cr.right = 150;
	

}

CWeek7_3View::~CWeek7_3View()
{
}

BOOL CWeek7_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_3View ����

void CWeek7_3View::OnDraw(CDC* pDC)
{
	CWeek7_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect client;
	GetClientRect(&client);
	if (set)
	{
		SetTimer(1, 500, NULL);
			set = false;
	}

	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_3View ���

#ifdef _DEBUG
void CWeek7_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_3Doc* CWeek7_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_3Doc)));
	return (CWeek7_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_3View ��Ϣ�������


void CWeek7_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void CWeek7_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;

	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek7_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect client;
	GetClientRect(&client);
	CWeek7_3Doc* pDoc = GetDocument();
	if (flag == 1)
	{
		cr.right+=50;
		cr.left += 50;
		if (cr.right >= client.right)flag = 2;
	}
	else if(flag==2)
	{
		cr.right -= 50;
		cr.left -=50;
		if (cr.left <= client.left)flag = 1;
	}
	this->Invalidate();
	CView::OnTimer(nIDEvent);
}
