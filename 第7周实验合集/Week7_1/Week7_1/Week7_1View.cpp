
// Week7_1View.cpp : CWeek7_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_1.h"
#endif

#include "Week7_1Doc.h"
#include "Week7_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_1View

IMPLEMENT_DYNCREATE(CWeek7_1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek7_1View ����/����

CWeek7_1View::CWeek7_1View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100;
	cr.right = 300;
	cr.top = 100;
	cr.bottom = 300;

}

CWeek7_1View::~CWeek7_1View()
{
}

BOOL CWeek7_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_1View ����

void CWeek7_1View::OnDraw(CDC* pDC)
{
	CWeek7_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_1View ���

#ifdef _DEBUG
void CWeek7_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_1Doc* CWeek7_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_1Doc)));
	return (CWeek7_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_1View ��Ϣ�������


void CWeek7_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (cr.left <=point.x&&cr.right>=point.x&&cr.top<=point.y&&cr.bottom>=point.y)
	{
		flag = 1;
	    a = point.x - cr.left;
        b = cr.right - point.x;
	    c = point.y-cr.top;
	    d = cr.bottom-point.y; 
    }

	CView::OnLButtonDown(nFlags, point);
}


void CWeek7_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		cr.left = point.x - a;
		cr.right = point.x + b;
		cr.top = point.y - c;
		cr.bottom = point.y + d;
		this->InvalidateRect(NULL,true);
	}


	CView::OnMouseMove(nFlags, point);
}


void CWeek7_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	flag = 0;
	
	CView::OnLButtonUp(nFlags, point);
}
