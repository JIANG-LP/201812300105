
// Week2_3plusView.cpp : CWeek2_3plusView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_3plus.h"
#endif

#include "Week2_3plusDoc.h"
#include "Week2_3plusView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_3plusView

IMPLEMENT_DYNCREATE(CWeek2_3plusView, CView)

BEGIN_MESSAGE_MAP(CWeek2_3plusView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_3plusView ����/����

CWeek2_3plusView::CWeek2_3plusView()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_3plusView::~CWeek2_3plusView()
{
}

BOOL CWeek2_3plusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_3plusView ����

void CWeek2_3plusView::OnDraw(CDC* pDC)
{
	CWeek2_3plusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString a = _T("����A��");
	CString b = _T("����B��");
	CString c = _T("����C��");
	CString d = _T("����D��");
	pDC->TextOutW(100, 80, a);
	pDC->TextOutW(400, 80, b);
	pDC->TextOutW(700, 80, c);
	pDC->TextOutW(470, 325, d);
	pDC->Rectangle(pDoc->ar);
	pDC->Rectangle(pDoc->br);
	pDC->Rectangle(pDoc->cr);
	pDC->Rectangle(pDoc->dr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek2_3plusView ���

#ifdef _DEBUG
void CWeek2_3plusView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_3plusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_3plusDoc* CWeek2_3plusView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_3plusDoc)));
	return (CWeek2_3plusDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_3plusView ��Ϣ�������


void CWeek2_3plusView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CWeek2_3plusDoc* pDoc = GetDocument();
	CClientDC dc(this);

	if (point.x > pDoc->ar.left&&point.x<pDoc->ar.right&&point.y>pDoc->ar.top&&point.y < pDoc->ar.bottom)
	{
		pDoc->i = rand() % 200;
		pDoc->s1.Format(_T("%d"),pDoc->i);
		dc.TextOutW(point.x, point.y, pDoc->s1);
	}
	else if (point.x > pDoc->br.left&&point.x<pDoc->br.right&&point.y>pDoc->br.top&&point.y < pDoc->br.bottom)
	{
		pDoc->j = rand() % 200;
		pDoc->s2.Format(_T("%d"), pDoc->j);
		dc.TextOutW(point.x, point.y, pDoc->s2);
	}
	else if (point.x > pDoc->dr.left&&point.x<pDoc->dr.right&&point.y>pDoc->dr.top&&point.y < pDoc->dr.bottom)
	{
		     count++;
		if (count == 5)count = 1;
		switch (count)
		{
			case 1:dc.TextOutW(point.x, point.y, pDoc->add); break;
			case 2:dc.TextOutW(point.x, point.y, pDoc->sub); break;
			case 3:dc.TextOutW(point.x, point.y, pDoc->mul); break;
			case 4:dc.TextOutW(point.x, point.y, pDoc->did); break;
			default:
				break;	
		}
	}
	else if (point.x > pDoc->cr.left && point.x<pDoc->cr.right &&point.y>pDoc->cr.top&&point.y < pDoc->cr.bottom)
	{
		switch (count)
		{
			case 1:
			{
				pDoc->k = pDoc->i + pDoc->j;
				pDoc->s3.Format(_T("%d"), pDoc->k);
				dc.TextOutW(point.x, point.y, pDoc->s3);
				break;
			}
			case 2:
			{
				pDoc->k = pDoc->i - pDoc->j;
				pDoc->s3.Format(_T("%d"), pDoc->k);
				dc.TextOutW(point.x, point.y, pDoc->s3);
				break;
			}
			
			case 3: 
			{
				pDoc->k = pDoc->i * pDoc->j;
				pDoc->s3.Format(_T("%d"), pDoc->k);
				dc.TextOutW(point.x, point.y, pDoc->s3);
				break;
			}
			case 4:
			{
				pDoc->k = pDoc->i / pDoc->j;
				pDoc->s3.Format(_T("%d"), pDoc->k);
				dc.TextOutW(point.x, point.y, pDoc->s3);
				break;
			}
			default:
				break;
		}
	}

	else
	{
		dc.TextOutW(point.x, point.y, pDoc->s4);
	}
    //this->InvalidateRect(NULL, false);
	CView::OnLButtonDown(nFlags, point);
}
