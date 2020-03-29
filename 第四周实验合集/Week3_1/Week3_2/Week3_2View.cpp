
// Week3_2View.cpp : CWeek3_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek3_2View 构造/析构

CWeek3_2View::CWeek3_2View()
{
	// TODO: 在此处添加构造代码

}

CWeek3_2View::~CWeek3_2View()
{
}

BOOL CWeek3_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek3_2View 绘制

void CWeek3_2View::OnDraw(CDC* pDC)
{
	CWeek3_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("MouseMove移动了:%d次,横向移动%f个像素发生一次"),pDoc->count,(float)(x2-x1)/pDoc->count);
	pDC->TextOutW(500,300,s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek3_2View 诊断

#ifdef _DEBUG
void CWeek3_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_2Doc* CWeek3_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_2Doc)));
	return (CWeek3_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_2View 消息处理程序


void CWeek3_2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_2Doc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON)
	{
		pDoc->count++;

	}

	CView::OnMouseMove(nFlags, point);
}


void CWeek3_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x1 = point.x;

	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x2 = point.x;

	InvalidateRect(NULL,false);
	CView::OnLButtonUp(nFlags, point);
}
