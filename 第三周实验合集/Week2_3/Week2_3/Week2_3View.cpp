
// Week2_3View.cpp : CWeek2_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CWeek2_3View 构造/析构

CWeek2_3View::CWeek2_3View()
{
	// TODO: 在此处添加构造代码

}

CWeek2_3View::~CWeek2_3View()
{
}

BOOL CWeek2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_3View 绘制

void CWeek2_3View::OnDraw(CDC* pDC)
{
	CWeek2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString a = _T("矩形A：");
	CString b = _T("矩形B：");
	CString c = _T("矩形C：");
	pDC->TextOutW(100, 80, a);
	pDC->TextOutW(400, 80, b);
	pDC->TextOutW(700, 80, c);
	pDC->Rectangle(pDoc->ar);
	pDC->Rectangle(pDoc->br);
	pDC->Rectangle(pDoc->cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek2_3View 诊断

#ifdef _DEBUG
void CWeek2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_3Doc* CWeek2_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_3Doc)));
	return (CWeek2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_3View 消息处理程序


void CWeek2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CString s1; 
	CString s2;
	CString s3;
	CString s4 = _T("输入无效");

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
