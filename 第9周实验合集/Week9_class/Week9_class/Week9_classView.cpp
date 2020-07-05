
// Week9_classView.cpp : CWeek9_classView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week9_class.h"
#endif

#include "Week9_classDoc.h"
#include "Week9_classView.h"
#include <fstream>
#include"Mydlg.h"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9_classView

IMPLEMENT_DYNCREATE(CWeek9_classView, CView)

BEGIN_MESSAGE_MAP(CWeek9_classView, CView)
	ON_COMMAND(ID_32771, &CWeek9_classView::OnFileName)
	ON_COMMAND(ID_FILE_SAVE, &CWeek9_classView::OnFileSave)
	ON_COMMAND(ID_FILE_OPEN, &CWeek9_classView::OnFileOpen)


END_MESSAGE_MAP()

// CWeek9_classView 构造/析构

CWeek9_classView::CWeek9_classView()
{
	// TODO: 在此处添加构造代码

}

CWeek9_classView::~CWeek9_classView()
{
}

BOOL CWeek9_classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9_classView 绘制

void CWeek9_classView::OnDraw(CDC* /*pDC*/)
{
	CWeek9_classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9_classView 诊断

#ifdef _DEBUG
void CWeek9_classView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9_classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9_classDoc* CWeek9_classView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9_classDoc)));
	return (CWeek9_classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9_classView 消息处理程序


void CWeek9_classView::OnFileName()
{
	// TODO: 在此添加命令处理程序代码
	CWeek9_classDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if(r==IDOK)
	{
		pDoc->filename=cfd.GetPathName();
		dc.TextOutW(300, 300, pDoc->filename);
	}
}


void CWeek9_classView::OnFileSave()
{
	// TODO: 在此添加命令处理程序代码
	CWeek9_classDoc* pDoc = GetDocument();
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs("C:\\Users\\JIANG-LP\\Desktop\\abc.txt");
		ofs << CT2A(pDoc->filename) << endl;
	}
}


void CWeek9_classView::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	Mydlg dlg;
	int r = dlg.DoModal();

}

