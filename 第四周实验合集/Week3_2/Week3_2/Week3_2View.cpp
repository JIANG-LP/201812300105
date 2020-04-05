
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
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
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
	pDC->Rectangle(pDoc->r);
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


void CWeek3_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_2Doc* pDoc = GetDocument();
	CRect client;
	GetClientRect(&client);

	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->r.left > 0)
		{
			pDoc->r.left -= 5;
			pDoc->r.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->r.right<=(client.right-client.left))
		{
			pDoc->r.left += 5;
			pDoc->r.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->r.top>0)
		{
			pDoc->r.top -= 5;
			pDoc->r.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->r.bottom<=(client.bottom-client.top))
		{
			pDoc->r.top += 5;
			pDoc->r.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->r.left>=0 && pDoc->r.left <= pDoc->r.right&&pDoc->r.top>=0 && pDoc->r.top <= pDoc->r.bottom)
		{
			pDoc->r.left -= 3;
			pDoc->r.top -= 3;
		}
		break;
	case VK_END:
		if (pDoc->r.left>=0 && pDoc->r.left<=pDoc->r.right&&pDoc->r.top>=0 && pDoc->r.top<=pDoc->r.bottom)
		{
			pDoc->r.left += 3;
			pDoc->r.top += 3;
		}
		break;
	default:
		break;
	}

	InvalidateRect(NULL,TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CWeek3_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_2Doc* pDoc = GetDocument();
	pDoc->r.left = 30;
	pDoc->r.top = 30;
	pDoc->r.right = 80;
	pDoc->r.bottom = 80;

	InvalidateRect(NULL,TRUE);
	CView::OnLButtonDown(nFlags, point);
}
