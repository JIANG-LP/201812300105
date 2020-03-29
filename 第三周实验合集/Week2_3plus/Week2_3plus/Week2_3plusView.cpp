
// Week2_3plusView.cpp : CWeek2_3plusView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CWeek2_3plusView 构造/析构

CWeek2_3plusView::CWeek2_3plusView()
{
	// TODO: 在此处添加构造代码

}

CWeek2_3plusView::~CWeek2_3plusView()
{
}

BOOL CWeek2_3plusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_3plusView 绘制

void CWeek2_3plusView::OnDraw(CDC* pDC)
{
	CWeek2_3plusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString a = _T("矩形A：");
	CString b = _T("矩形B：");
	CString c = _T("矩形C：");
	CString d = _T("矩形D：");
	pDC->TextOutW(100, 80, a);
	pDC->TextOutW(400, 80, b);
	pDC->TextOutW(700, 80, c);
	pDC->TextOutW(470, 325, d);
	pDC->Rectangle(pDoc->ar);
	pDC->Rectangle(pDoc->br);
	pDC->Rectangle(pDoc->cr);
	pDC->Rectangle(pDoc->dr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek2_3plusView 诊断

#ifdef _DEBUG
void CWeek2_3plusView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_3plusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_3plusDoc* CWeek2_3plusView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_3plusDoc)));
	return (CWeek2_3plusDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_3plusView 消息处理程序


void CWeek2_3plusView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

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
