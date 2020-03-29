
// Week3_1View.cpp : CWeek3_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week3_1.h"
#endif

#include "Week3_1Doc.h"
#include "Week3_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_1View

IMPLEMENT_DYNCREATE(CWeek3_1View, CView)

BEGIN_MESSAGE_MAP(CWeek3_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CWeek3_1View 构造/析构

CWeek3_1View::CWeek3_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek3_1View::~CWeek3_1View()
{
}

BOOL CWeek3_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek3_1View 绘制

void CWeek3_1View::OnDraw(CDC* pDC)
{
	CWeek3_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("(%d,%d)"),x,y);
	pDC->Rectangle(pDoc->r);
	pDC->TextOutW(x,y,s);
	if (flag == 0) {
		pDoc->r.left = 0;
		pDoc->r.right = 0;
		pDoc->r.top = 0;
		pDoc->r.bottom = 0;
	}
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek3_1View 诊断

#ifdef _DEBUG
void CWeek3_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_1Doc* CWeek3_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_1Doc)));
	return (CWeek3_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_1View 消息处理程序


void CWeek3_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_1Doc* pDoc = GetDocument();
	pDoc->r.left = point.x;
	pDoc->r.top = point.y;

	
	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_1Doc* pDoc = GetDocument();
	
	flag = 0;
	InvalidateRect(NULL, true);

	CView::OnLButtonUp(nFlags, point);
}


void CWeek3_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_1Doc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON) {
		pDoc->r.right = point.x;
		pDoc->r.bottom = point.y;
		x= point.x;
		y = point.y;
		Invalidate();
		flag = 1;
	}
	CView::OnMouseMove(nFlags, point);
}
