
// Week5_1View.cpp : CWeek5_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_1.h"
#endif

#include "Week5_1Doc.h"
#include "Week5_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_1View

IMPLEMENT_DYNCREATE(CWeek5_1View, CView)

BEGIN_MESSAGE_MAP(CWeek5_1View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CWeek5_1View ����/����

CWeek5_1View::CWeek5_1View()
{
	// TODO: �ڴ˴���ӹ������
	r.left = 150;
	r.right = 455;
	r.top = 100;
	r.bottom = 300;
}

CWeek5_1View::~CWeek5_1View()
{
}

BOOL CWeek5_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_1View ����

void CWeek5_1View::OnDraw(CDC* pDC)
{
	CWeek5_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush *newBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush = pDC->SelectObject(newBrush);
	pDC->Rectangle(&r); 
	pDC->SelectObject(pOldBrush);
	
	/*r.left = 150;
	r.right = 450;
	r.top = 100;
	r.bottom = 300;*/
	pDC->TextOutW(x, y, s);
	x += 16;
	if (x >= 450)
	{
		y += 20;
		x = 155;

	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_1View ���

#ifdef _DEBUG
void CWeek5_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_1Doc* CWeek5_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_1Doc)));
	return (CWeek5_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_1View ��Ϣ�������


void CWeek5_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	
	
		s.Format(_T("%c"), nChar);
		this->InvalidateRect(NULL,false);


	CView::OnChar(nChar, nRepCnt, nFlags);
}
