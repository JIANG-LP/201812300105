
// Week4_3View.cpp : CWeek4_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4_3.h"
#endif

#include "Week4_3Doc.h"
#include "Week4_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_3View

IMPLEMENT_DYNCREATE(CWeek4_3View, CView)

BEGIN_MESSAGE_MAP(CWeek4_3View, CView)
	ON_COMMAND(ID_DRAWLINE,&CWeek4_3View::OnDrawline)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_DRAWRECT, &CWeek4_3View::OnDrawrect)
	ON_COMMAND(ID_ECLIPSE, &CWeek4_3View::OnEclipse)
END_MESSAGE_MAP()

// CWeek4_3View 构造/析构

CWeek4_3View::CWeek4_3View()
{
	// TODO: 在此处添加构造代码
}

CWeek4_3View::~CWeek4_3View()
{
}

BOOL CWeek4_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4_3View 绘制

void CWeek4_3View::OnDraw(CDC* pDC)
{
	CWeek4_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1)
	{
		pDC->MoveTo(pd.x, pd.y);
		pDC->LineTo(pu.x, pu.y);
	}
	if (flag == 2)
	{
		dr.left = pd.x;
		dr.top = pd.y;
		dr.right = pu.x;
		dr.bottom = pu.y;
		pDC->Rectangle(dr);
	}
	if (flag == 3)
	{
		dr.left = pd.x;
		dr.top = pd.y;
		dr.right = pu.x;
		dr.bottom = pu.y;
		pDC->Ellipse(dr);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4_3View 诊断

#ifdef _DEBUG
void CWeek4_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_3Doc* CWeek4_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_3Doc)));
	return (CWeek4_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_3View 消息处理程序


void CWeek4_3View::OnDrawline()
{
	// TODO: 在此添加命令处理程序代码
	 flag = 1;
}


void CWeek4_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pd.x = point.x;
	pd.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek4_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pu.x = point.x;
	pu.y = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CWeek4_3View::OnDrawrect()
{
	// TODO: 在此添加命令处理程序代码
	flag = 2;
}


void CWeek4_3View::OnEclipse()
{
	// TODO: 在此添加命令处理程序代码
	flag = 3;
}
