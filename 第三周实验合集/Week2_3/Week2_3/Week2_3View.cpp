
// Week2_3View.cpp : CWeek2_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_3.h"
#endif

#include "Week2_3Doc.h"
#include "Week2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_3View

IMPLEMENT_DYNCREATE(CWeek2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek2_3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_3View ����/����

CWeek2_3View::CWeek2_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_3View::~CWeek2_3View()
{
}

BOOL CWeek2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_3View ����

void CWeek2_3View::OnDraw(CDC* pDC)
{
	CWeek2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString a = _T("����A��");
	CString b = _T("����B��");
	CString c = _T("����C��");
	pDC->TextOutW(100, 80, a);
	pDC->TextOutW(400, 80, b);
	pDC->TextOutW(700, 80, c);
	pDC->Rectangle(pDoc->ar);
	pDC->Rectangle(pDoc->br);
	pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek2_3View ���

#ifdef _DEBUG
void CWeek2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_3Doc* CWeek2_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_3Doc)));
	return (CWeek2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_3View ��Ϣ�������


void CWeek2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CString s1; 
	CString s2;
	CString s3;
	CString s4 = _T("������Ч");

	x = point.x;
	y = point.y;

	CWeek2_3Doc* pDoc = GetDocument();
	CClientDC dc(this);

	if (x > pDoc->ar.left&&x<pDoc->ar.right&&y>pDoc->ar.top&&y < pDoc->ar.bottom)
	{
		i = rand() % 200;
		s1.Format(_T("%d"), i);
		dc.TextOutW(x,y,s1);
	}
	else if (x > pDoc->br.left&&x<pDoc->br.right&&y>pDoc->br.top&&y < pDoc->br.bottom)
	{
		j = rand() % 200;
		s2.Format(_T("%d"), j);
		dc.TextOutW(x, y, s2);
	}
	else if (x > pDoc->cr.left && x<pDoc->cr.right &&y>pDoc->cr.top&&y < pDoc->cr.bottom)
	{
		k = i + j;
		s3.Format(_T("%d"), k);
		dc.TextOutW(x, y, s3);
	}
	else 
	{
		dc.TextOutW(x, y, s4);
	}

	CView::OnLButtonDown(nFlags, point);
}
