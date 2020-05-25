
// Week7_2View.cpp : CWeek7_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_2.h"
#endif

#include "Week7_2Doc.h"
#include "Week7_2View.h"
#include "Plusdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_2View

IMPLEMENT_DYNCREATE(CWeek7_2View, CView)

BEGIN_MESSAGE_MAP(CWeek7_2View, CView)
	ON_COMMAND(ID_32772, &CWeek7_2View::OnPlus)
END_MESSAGE_MAP()

// CWeek7_2View 构造/析构

CWeek7_2View::CWeek7_2View()
{
	// TODO: 在此处添加构造代码

}

CWeek7_2View::~CWeek7_2View()
{
}

BOOL CWeek7_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_2View 绘制

void CWeek7_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_2View 诊断

#ifdef _DEBUG
void CWeek7_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_2Doc* CWeek7_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_2Doc)));
	return (CWeek7_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_2View 消息处理程序


void CWeek7_2View::OnPlus()
{
	// TODO: 在此添加命令处理程序代码
	Plusdlg dlg;
	int t = dlg.DoModal();
	if(t==IDOK)
	{

	}

}
