
// Week7_class2View.cpp : CWeek7_class2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_class2.h"
#endif

#include "Week7_class2Doc.h"
#include "Week7_class2View.h"
#include "Mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_class2View

IMPLEMENT_DYNCREATE(CWeek7_class2View, CView)

BEGIN_MESSAGE_MAP(CWeek7_class2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek7_class2View 构造/析构

CWeek7_class2View::CWeek7_class2View()
{
	// TODO: 在此处添加构造代码

}

CWeek7_class2View::~CWeek7_class2View()
{
}

BOOL CWeek7_class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_class2View 绘制

void CWeek7_class2View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_class2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_class2View 诊断

#ifdef _DEBUG
void CWeek7_class2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_class2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_class2Doc* CWeek7_class2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_class2Doc)));
	return (CWeek7_class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_class2View 消息处理程序


void CWeek7_class2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Mydlg dlg;
	CString s;
	
	int t =dlg.DoModal();
	if (t == IDOK)
	{
	}
	CView::OnLButtonDown(nFlags, point);
}
