
// Week2_classView.cpp : CWeek2_classView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_class.h"
#endif

#include "Week2_classDoc.h"
#include "Week2_classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_classView

IMPLEMENT_DYNCREATE(CWeek2_classView, CView)

BEGIN_MESSAGE_MAP(CWeek2_classView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_classView ����/����

CWeek2_classView::CWeek2_classView()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_classView::~CWeek2_classView()
{
}

BOOL CWeek2_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_classView ����

void CWeek2_classView::OnDraw(CDC* pDC)
{
	CWeek2_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush *pBrush = new CBrush;
	CBrush *pOldBrh;
	pBrush->CreateSolidBrush(RGB(0, 0, 255));
	pOldBrh = pDC->SelectObject(pBrush);
	//pDC->Ellipse(cr);
	GetClientRect(&dr);
	pDC->Ellipse(dr);
	pBrush->DeleteObject();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek2_classView ���

#ifdef _DEBUG
void CWeek2_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_classDoc* CWeek2_classView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_classDoc)));
	return (CWeek2_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_classView ��Ϣ�������


void CWeek2_classView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 100+50;
	cr.top = point.y - r;
	cr.left = point.x - r;
	cr.bottom = point.y + r;
	cr.right = point.x + r;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
