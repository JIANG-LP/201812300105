
// UsinglibdllView.cpp : CUsinglibdllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Usinglibdll.h"
#endif

#include "UsinglibdllDoc.h"
#include "UsinglibdllView.h"
#include "f1.h"
#include "W32D.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsinglibdllView

IMPLEMENT_DYNCREATE(CUsinglibdllView, CView)

BEGIN_MESSAGE_MAP(CUsinglibdllView, CView)
END_MESSAGE_MAP()

// CUsinglibdllView 构造/析构

CUsinglibdllView::CUsinglibdllView()
{
	// TODO: 在此处添加构造代码

}

CUsinglibdllView::~CUsinglibdllView()
{
}

BOOL CUsinglibdllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsinglibdllView 绘制

void CUsinglibdllView::OnDraw(CDC* pDC)
{
	CUsinglibdllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	int a = factorial(5);
	s.Format(_T("%d"), a);
	pDC->TextOutW(200, 150, s);

	FAC fac;
	CString ss;
	ss.Format(_T("%f"), fac.convert(30.0));
	pDC->TextOutW(200, 200, ss);

	CString s1;
	int a1 = factorial1(5);
	s1.Format(_T("%d"), a1);
	pDC->TextOutW(200, 250, s1);

	FAC1 fac1;
	CString ss1;
	ss1.Format(_T("%f"), fac1.convert(30.0));
	pDC->TextOutW(200, 300, ss1);

	// TODO: 在此处为本机数据添加绘制代码
}


// CUsinglibdllView 诊断

#ifdef _DEBUG
void CUsinglibdllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsinglibdllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsinglibdllDoc* CUsinglibdllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsinglibdllDoc)));
	return (CUsinglibdllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsinglibdllView 消息处理程序
