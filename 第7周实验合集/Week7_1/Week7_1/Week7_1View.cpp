
// Week7_1View.cpp : CWeek7_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_1.h"
#endif

#include "Week7_1Doc.h"
#include "Week7_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_1View

IMPLEMENT_DYNCREATE(CWeek7_1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek7_1View 构造/析构

CWeek7_1View::CWeek7_1View()
{
	// TODO: 在此处添加构造代码
	cr.left = 100;
	cr.right = 300;
	cr.top = 100;
	cr.bottom = 300;

}

CWeek7_1View::~CWeek7_1View()
{
}

BOOL CWeek7_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_1View 绘制

void CWeek7_1View::OnDraw(CDC* pDC)
{
	CWeek7_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr);

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_1View 诊断

#ifdef _DEBUG
void CWeek7_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_1Doc* CWeek7_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_1Doc)));
	return (CWeek7_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_1View 消息处理程序


void CWeek7_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (cr.left <=point.x&&cr.right>=point.x&&cr.top<=point.y&&cr.bottom>=point.y)
	{
		flag = 1;
	    a = point.x - cr.left;
        b = cr.right - point.x;
	    c = point.y-cr.top;
	    d = cr.bottom-point.y; 
    }

	CView::OnLButtonDown(nFlags, point);
}


void CWeek7_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		cr.left = point.x - a;
		cr.right = point.x + b;
		cr.top = point.y - c;
		cr.bottom = point.y + d;
		this->InvalidateRect(NULL,true);
	}


	CView::OnMouseMove(nFlags, point);
}


void CWeek7_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	flag = 0;
	
	CView::OnLButtonUp(nFlags, point);
}
