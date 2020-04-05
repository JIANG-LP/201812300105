
// Week4_3View.cpp : CWeek4_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4_3.h"
#endif

#include "Week4_3Doc.h"
#include "Week4_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_3View

IMPLEMENT_DYNCREATE(CWeek4_3View, CView)

BEGIN_MESSAGE_MAP(CWeek4_3View, CView)
	ON_COMMAND(ID_DRAWLINE,&CWeek4_3View::OnDrawline)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_DRAWRECT, &CWeek4_3View::OnDrawrect)
	ON_COMMAND(ID_ECLIPSE, &CWeek4_3View::OnEclipse)
END_MESSAGE_MAP()

// CWeek4_3View ����/����

CWeek4_3View::CWeek4_3View()
{
	// TODO: �ڴ˴���ӹ������
}

CWeek4_3View::~CWeek4_3View()
{
}

BOOL CWeek4_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_3View ����

void CWeek4_3View::OnDraw(CDC* pDC)
{
	CWeek4_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1)
	{
		pDC->MoveTo(pd.x, pd.y);
		pDC->LineTo(pu.x, pu.y);
	}
	if (flag == 2)
	{
		dr.left = pd.x;
		dr.top = pd.y;
		dr.right = pu.x;
		dr.bottom = pu.y;
		pDC->Rectangle(dr);
	}
	if (flag == 3)
	{
		dr.left = pd.x;
		dr.top = pd.y;
		dr.right = pu.x;
		dr.bottom = pu.y;
		pDC->Ellipse(dr);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_3View ���

#ifdef _DEBUG
void CWeek4_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_3Doc* CWeek4_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_3Doc)));
	return (CWeek4_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_3View ��Ϣ�������


void CWeek4_3View::OnDrawline()
{
	// TODO: �ڴ���������������
	 flag = 1;
}


void CWeek4_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pd.x = point.x;
	pd.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek4_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pu.x = point.x;
	pu.y = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CWeek4_3View::OnDrawrect()
{
	// TODO: �ڴ���������������
	flag = 2;
}


void CWeek4_3View::OnEclipse()
{
	// TODO: �ڴ���������������
	flag = 3;
}
