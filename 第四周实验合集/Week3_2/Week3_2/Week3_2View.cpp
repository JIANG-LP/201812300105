
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
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
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
	pDC->Rectangle(pDoc->r);
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


void CWeek3_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_2Doc* pDoc = GetDocument();
	CRect client;
	GetClientRect(&client);

	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->r.left > 0)
		{
			pDoc->r.left -= 5;
			pDoc->r.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->r.right<=(client.right-client.left))
		{
			pDoc->r.left += 5;
			pDoc->r.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->r.top>0)
		{
			pDoc->r.top -= 5;
			pDoc->r.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->r.bottom<=(client.bottom-client.top))
		{
			pDoc->r.top += 5;
			pDoc->r.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->r.left>=0 && pDoc->r.left <= pDoc->r.right&&pDoc->r.top>=0 && pDoc->r.top <= pDoc->r.bottom)
		{
			pDoc->r.left -= 3;
			pDoc->r.top -= 3;
		}
		break;
	case VK_END:
		if (pDoc->r.left>=0 && pDoc->r.left<=pDoc->r.right&&pDoc->r.top>=0 && pDoc->r.top<=pDoc->r.bottom)
		{
			pDoc->r.left += 3;
			pDoc->r.top += 3;
		}
		break;
	default:
		break;
	}

	InvalidateRect(NULL,TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CWeek3_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_2Doc* pDoc = GetDocument();
	pDoc->r.left = 30;
	pDoc->r.top = 30;
	pDoc->r.right = 80;
	pDoc->r.bottom = 80;

	InvalidateRect(NULL,TRUE);
	CView::OnLButtonDown(nFlags, point);
}
