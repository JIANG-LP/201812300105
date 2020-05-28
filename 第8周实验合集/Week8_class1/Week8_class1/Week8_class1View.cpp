
// Week8_class1View.cpp : CWeek8_class1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week8_class1.h"
#endif


#include "Week8_class1Doc.h"
#include "Week8_class1View.h"
#include "Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek8_class1View

IMPLEMENT_DYNCREATE(CWeek8_class1View, CView)

BEGIN_MESSAGE_MAP(CWeek8_class1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_dlg, &CWeek8_class1View::Ondlg)
END_MESSAGE_MAP()


// CWeek8_class1View 构造/析构

CWeek8_class1View::CWeek8_class1View()
{
	// TODO: 在此处添加构造代码

}

CWeek8_class1View::~CWeek8_class1View()
{
}

BOOL CWeek8_class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek8_class1View 绘制

void CWeek8_class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek8_class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek8_class1View 诊断

#ifdef _DEBUG
void CWeek8_class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek8_class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek8_class1Doc* CWeek8_class1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek8_class1Doc)));
	return (CWeek8_class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek8_class1View 消息处理程序


void CWeek8_class1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek8_class1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
	    pDoc->s = cfd.GetFileName();
		GetDC()->TextOutW(200,200,pDoc->s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek8_class1View::Ondlg()
{
	// TODO: 在此添加命令处理程序代码
	CWeek8_class1Doc* pDoc = GetDocument();
	Dlg dlg;
	dlg.filename = pDoc->s;
	int t = dlg.DoModal();

}
