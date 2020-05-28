
// Week2_classView.cpp : CWeek2_classView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week2_class.h"
#endif

#include "Week2_classDoc.h"
#include "Week2_classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_classView

IMPLEMENT_DYNCREATE(CWeek2_classView, CView)

BEGIN_MESSAGE_MAP(CWeek2_classView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_classView 构造/析构

CWeek2_classView::CWeek2_classView()
{
	// TODO: 在此处添加构造代码

}

CWeek2_classView::~CWeek2_classView()
{
}

BOOL CWeek2_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_classView 绘制

void CWeek2_classView::OnDraw(CDC* pDC)
{
	CWeek2_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush *pBrush = new CBrush;
	CBrush *pOldBrh;
	pBrush->CreateSolidBrush(RGB(0, 0, 255));
	pOldBrh = pDC->SelectObject(pBrush);
	//pDC->Ellipse(cr);
	GetClientRect(&dr);
	pDC->Ellipse(dr);
	pBrush->DeleteObject();
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek2_classView 诊断

#ifdef _DEBUG
void CWeek2_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_classDoc* CWeek2_classView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_classDoc)));
	return (CWeek2_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_classView 消息处理程序


void CWeek2_classView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 100+50;
	cr.top = point.y - r;
	cr.left = point.x - r;
	cr.bottom = point.y + r;
	cr.right = point.x + r;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
