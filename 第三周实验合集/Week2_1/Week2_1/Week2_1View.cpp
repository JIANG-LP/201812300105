
// Week2_1View.cpp : CWeek2_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week2_1.h"
#endif

#include "Week2_1Doc.h"
#include "Week2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_1View

IMPLEMENT_DYNCREATE(CWeek2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek2_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek2_1View 构造/析构

CWeek2_1View::CWeek2_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek2_1View::~CWeek2_1View()
{
}

BOOL CWeek2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_1View 绘制

void CWeek2_1View::OnDraw(CDC* pDC)
{
	CWeek2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(pDoc->pointx, pDoc->pointy, pDoc->s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek2_1View 诊断

#ifdef _DEBUG
void CWeek2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_1Doc* CWeek2_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_1Doc)));
	return (CWeek2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_1View 消息处理程序


void CWeek2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CClientDC dc(this);
	CWeek2_1Doc* pDoc = GetDocument();
	pDoc->s = _T("左键正被按下");
	pDoc->pointx = point.x;
	pDoc->pointy = point.y;
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CWeek2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek2_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->s = _T("左键正抬起");
	pDoc->pointx = point.x;
	pDoc->pointy = point.y;
	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
