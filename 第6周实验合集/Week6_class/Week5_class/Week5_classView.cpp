
// Week5_classView.cpp : CWeek5_classView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week5_class.h"
#endif

#include "Week5_classDoc.h"
#include "Week5_classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_classView

IMPLEMENT_DYNCREATE(CWeek5_classView, CView)

BEGIN_MESSAGE_MAP(CWeek5_classView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek5_classView::OnFileOpen)
END_MESSAGE_MAP()

// CWeek5_classView 构造/析构

CWeek5_classView::CWeek5_classView()
{
	// TODO: 在此处添加构造代码

}

CWeek5_classView::~CWeek5_classView()
{
}

BOOL CWeek5_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5_classView 绘制

void CWeek5_classView::OnDraw(CDC* pDC)
{
	CWeek5_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5_classView 诊断

#ifdef _DEBUG
void CWeek5_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_classDoc* CWeek5_classView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_classDoc)));
	return (CWeek5_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_classView 消息处理程序


void CWeek5_classView::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码

	CFileDialog cfd(true);  //建立对象
	int r = cfd.DoModal();  //弹出对话框
	CClientDC dc(this);
	if(r==IDOK)
	{
		CString filename = cfd.GetPathName();
		//dc.TextOutW(300, 200, filename);

		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
