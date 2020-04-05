
// Week4_1View.cpp : CWeek4_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4_1.h"
#endif

#include "Week4_1Doc.h"
#include "Week4_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_1View

IMPLEMENT_DYNCREATE(CWeek4_1View, CView)

BEGIN_MESSAGE_MAP(CWeek4_1View, CView)
	ON_COMMAND(ID_SHOWNAME, &CWeek4_1View::OnShowname)
END_MESSAGE_MAP()

// CWeek4_1View 构造/析构

CWeek4_1View::CWeek4_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek4_1View::~CWeek4_1View()
{
}

BOOL CWeek4_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4_1View 绘制

void CWeek4_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek4_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4_1View 诊断

#ifdef _DEBUG
void CWeek4_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_1Doc* CWeek4_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_1Doc)));
	return (CWeek4_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_1View 消息处理程序


void CWeek4_1View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString name = _T("蒋丽萍");
	CClientDC dc(this);
	dc.TextOutW(200,200,name);
}
