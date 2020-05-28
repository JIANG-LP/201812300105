
// Week8_2View.cpp : CWeek8_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week8_2.h"
#endif

#include "Week8_2Doc.h"
#include "Week8_2View.h"
#include "mdlg_1.h"
#include "mdlg_2.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek8_2View

IMPLEMENT_DYNCREATE(CWeek8_2View, CView)

BEGIN_MESSAGE_MAP(CWeek8_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_32771, &CWeek8_2View::OnEclipse)
	ON_COMMAND(ID_color, &CWeek8_2View::OnColor)
END_MESSAGE_MAP()

// CWeek8_2View 构造/析构

CWeek8_2View::CWeek8_2View()
{
	// TODO: 在此处添加构造代码
	red = 249;
	green = 224;
	blue = 170;
	width = 10;
}

CWeek8_2View::~CWeek8_2View()
{
}

BOOL CWeek8_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek8_2View 绘制

void CWeek8_2View::OnDraw(CDC* pDC)
{
	CWeek8_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//第（1）题
	CPen newpen(PS_SOLID, width, color);
	CPen *oldpen = pDC->SelectObject(&newpen);
	CBrush *pBrush = new CBrush;
	CBrush *pOldBrh;
	pBrush->CreateSolidBrush(RGB(red, green, blue));
	pOldBrh = pDC->SelectObject(pBrush);
	pDC->SelectObject(oldpen);	
	pDC->Ellipse(cr);
	
	if (flag == 0) 
	{
		cr.left = 0;
		cr.right = 0;
		cr.top = 0;
		cr.bottom = 0;
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek8_2View 诊断

#ifdef _DEBUG
void CWeek8_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek8_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek8_2Doc* CWeek8_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek8_2Doc)));
	return (CWeek8_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek8_2View 消息处理程序


void CWeek8_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	cr.left = point.x;
	cr.top = point.y;
	if (point.x >= dr.left&&point.x <= dr.right&&point.y >= dr.top&&point.y <= dr.bottom)
	{
		CClientDC dc(this);
		CPen newpen(PS_DASH,1,RGB(0,0,0));
		CPen *oldpen = dc.SelectObject(&newpen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//背景透明效果
		pOldBrush = dc.SelectObject(pBrush);
	    dc.Rectangle(dr);
        dc.SelectObject(oldpen);
		newpen.DeleteObject();
		//InvalidateRect(NULL,false);
	}
	

	CView::OnLButtonDown(nFlags, point);
}


void CWeek8_2View::OnMButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;

	CView::OnMButtonUp(nFlags, point);
}


void CWeek8_2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nFlags&MK_LBUTTON) {
		cr.right = point.x;
		cr.bottom = point.y;
		blue = point.x - 50;
		red = point.y - 50;
		Invalidate();
		flag = 1;
	}

	CView::OnMouseMove(nFlags, point);
}


void CWeek8_2View::OnEclipse()
{
	// TODO: 在此添加命令处理程序代码
	mdlg_1 dlg1;
	int m = dlg1.DoModal();
	this->UpdateData(true);
	if(m==IDOK)
	{ 
		CClientDC dc(this);
		dr.left = dlg1.left;
		dr.right = dlg1.right;
		dr.top = dlg1.top;
		dr.bottom = dlg1.bottom;
		dc.Ellipse(dr);
	}
	this->UpdateData(false);
}


void CWeek8_2View::OnColor()//颜色值
{
	// TODO: 在此添加命令处理程序代码
	mdlg_2 dlg2;
	int n = dlg2.DoModal();
	if(n==IDOK)
	{
		CClientDC dc(this);
		CPen newpen(PS_SOLID, 1, RGB(dlg2.red, dlg2.green, dlg2.blue));
		CPen *oldpen = dc.SelectObject(&newpen);
		CBrush *pBrush = new CBrush;
		CBrush *pOldBrh;
		pBrush->CreateSolidBrush(RGB(red, green, blue));
		pOldBrh = dc.SelectObject(pBrush);
		dc.SelectObject(oldpen);
		dc.Ellipse(dr);
	}

}
