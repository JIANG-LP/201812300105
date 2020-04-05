
// Week4_classView.cpp : CWeek4_classView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4_class.h"
#endif

#include "Week4_classDoc.h"
#include "Week4_classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_classView

IMPLEMENT_DYNCREATE(CWeek4_classView, CView)

BEGIN_MESSAGE_MAP(CWeek4_classView, CView)
	ON_COMMAND(ID_SHOWCR, &CWeek4_classView::OnShowcr)
END_MESSAGE_MAP()

// CWeek4_classView 构造/析构

CWeek4_classView::CWeek4_classView()
{
	cr.left = 100;
	cr.right = 300;
	cr.top = 100;
	cr.bottom = 300;
		 
}

CWeek4_classView::~CWeek4_classView()
{
}

BOOL CWeek4_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4_classView 绘制

void CWeek4_classView::OnDraw(CDC* pDC)
{
	CWeek4_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4_classView 诊断

#ifdef _DEBUG
void CWeek4_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_classDoc* CWeek4_classView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_classDoc)));
	return (CWeek4_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_classView 消息处理程序


void CWeek4_classView::OnShowcr()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CRect crect;	
	CPoint p;
	GetClientRect(&crect);
	p.x = crect.right / 2;
	p.y = crect.bottom / 2;
	cr.left = p.x -300; 
	cr.right = p.x + 300;
	cr.top = p.y - 300;
	cr.bottom = p.y + 300;
	for (int i =1; i <10;i++)
	{
		cr.left +=40;
		cr.right -= 40;
		cr.top+= 40;
		cr.bottom -= 40;
		dc.Ellipse(cr);
	} 
	 
}
