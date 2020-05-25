
// Week7_3View.cpp : CWeek7_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_3.h"
#endif

#include "Week7_3Doc.h"
#include "Week7_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_3View

IMPLEMENT_DYNCREATE(CWeek7_3View, CView)

BEGIN_MESSAGE_MAP(CWeek7_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek7_3View 构造/析构

CWeek7_3View::CWeek7_3View()
{
	// TODO: 在此处添加构造代码
	cr.top = 200;
	cr.bottom = 300;
	cr.left = 50;
	cr.right = 150;
	

}

CWeek7_3View::~CWeek7_3View()
{
}

BOOL CWeek7_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_3View 绘制

void CWeek7_3View::OnDraw(CDC* pDC)
{
	CWeek7_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect client;
	GetClientRect(&client);
	if (set)
	{
		SetTimer(1, 500, NULL);
			set = false;
	}

	pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_3View 诊断

#ifdef _DEBUG
void CWeek7_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_3Doc* CWeek7_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_3Doc)));
	return (CWeek7_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_3View 消息处理程序


void CWeek7_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void CWeek7_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;

	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek7_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect client;
	GetClientRect(&client);
	CWeek7_3Doc* pDoc = GetDocument();
	if (flag == 1)
	{
		cr.right+=50;
		cr.left += 50;
		if (cr.right >= client.right)flag = 2;
	}
	else if(flag==2)
	{
		cr.right -= 50;
		cr.left -=50;
		if (cr.left <= client.left)flag = 1;
	}
	this->Invalidate();
	CView::OnTimer(nIDEvent);
}
