
// Week3_3View.cpp : CWeek3_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week3_3.h"
#endif

#include "Week3_3Doc.h"
#include "Week3_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_3View

IMPLEMENT_DYNCREATE(CWeek3_3View, CView)

BEGIN_MESSAGE_MAP(CWeek3_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek3_3View 构造/析构

CWeek3_3View::CWeek3_3View()
{
	// TODO: 在此处添加构造代码
	set = true;
}

CWeek3_3View::~CWeek3_3View()
{
}

BOOL CWeek3_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek3_3View 绘制

void CWeek3_3View::OnDraw(CDC* pDC)
{
	CWeek3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect client;
	GetClientRect(&client);

	if (set)
	{
		SetTimer(1,500,NULL);
		if(pDoc->r.bottom>=client.bottom-client.top)
		set = false;
	}
	
	pDC->Ellipse(pDoc->r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek3_3View 诊断

#ifdef _DEBUG
void CWeek3_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_3Doc* CWeek3_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_3Doc)));
	return (CWeek3_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_3View 消息处理程序


void CWeek3_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect client;
	GetClientRect(&client);
	CWeek3_3Doc* pDoc = GetDocument();
	pDoc->r.top += 50;
	pDoc->r.bottom += 50;
	if ((pDoc->r.bottom >= client.bottom)||flag==1)
	{
		flag = 1;
		pDoc->r.bottom = pDoc->r.bottom -100;
		pDoc->r.top -= 100;
	}
	if ((pDoc->r.top <= 0) || flag == 2)
	{
		flag =2;
	}


	Invalidate();
	CView::OnTimer(nIDEvent);
}
