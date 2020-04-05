
// Week4_2View.cpp : CWeek4_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4_2.h"
#endif

#include "Week4_2Doc.h"
#include "Week4_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_2View

IMPLEMENT_DYNCREATE(CWeek4_2View, CView)

BEGIN_MESSAGE_MAP(CWeek4_2View, CView)
END_MESSAGE_MAP()

// CWeek4_2View 构造/析构

CWeek4_2View::CWeek4_2View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_Width = BM.bmWidth;
	m_Hight = BM.bmHeight;
}

CWeek4_2View::~CWeek4_2View()
{
}

BOOL CWeek4_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4_2View 绘制

void CWeek4_2View::OnDraw(CDC* pDC)
{
	CWeek4_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0,0,m_Width,m_Hight,&MemDC,0,0,SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4_2View 诊断

#ifdef _DEBUG
void CWeek4_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_2Doc* CWeek4_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_2Doc)));
	return (CWeek4_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_2View 消息处理程序
