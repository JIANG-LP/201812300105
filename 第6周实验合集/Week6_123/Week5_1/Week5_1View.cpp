
// Week5_1View.cpp : CWeek5_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week5_1.h"
#endif

#include "Week5_1Doc.h"
#include "Week5_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_1View

IMPLEMENT_DYNCREATE(CWeek5_1View, CView)

BEGIN_MESSAGE_MAP(CWeek5_1View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CWeek5_1View 构造/析构

CWeek5_1View::CWeek5_1View()
{
	// TODO: 在此处添加构造代码
	r.left = 150;
	r.right = 455;
	r.top = 100;
	r.bottom = 300;
}

CWeek5_1View::~CWeek5_1View()
{
}

BOOL CWeek5_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5_1View 绘制

void CWeek5_1View::OnDraw(CDC* pDC)
{
	CWeek5_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush *newBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush = pDC->SelectObject(newBrush);
	pDC->Rectangle(&r); 
	pDC->SelectObject(pOldBrush);
	
	/*r.left = 150;
	r.right = 450;
	r.top = 100;
	r.bottom = 300;*/
	pDC->TextOutW(x, y, s);
	x += 16;
	if (x >= 450)
	{
		y += 20;
		x = 155;

	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5_1View 诊断

#ifdef _DEBUG
void CWeek5_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_1Doc* CWeek5_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_1Doc)));
	return (CWeek5_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_1View 消息处理程序


void CWeek5_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	
	
		s.Format(_T("%c"), nChar);
		this->InvalidateRect(NULL,false);


	CView::OnChar(nChar, nRepCnt, nFlags);
}
