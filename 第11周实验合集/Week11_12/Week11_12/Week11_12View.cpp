
// Week11_12View.cpp : CWeek11_12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week11_12.h"
#endif

#include "Week11_12Set.h"
#include "Week11_12Doc.h"
#include "Week11_12View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11_12View

IMPLEMENT_DYNCREATE(CWeek11_12View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek11_12View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek11_12View::OnShowp)
END_MESSAGE_MAP()

// CWeek11_12View 构造/析构

CWeek11_12View::CWeek11_12View()
	: CRecordView(IDD_WEEK11_12_FORM)
	, ID(0)
	, name(_T(""))
	, num(_T(""))
	, age(_T(""))
	, phonenum(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CWeek11_12View::~CWeek11_12View()
{
}

void CWeek11_12View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL CWeek11_12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek11_12View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week11_12Set;
	CRecordView::OnInitialUpdate();

}


// CWeek11_12View 诊断

#ifdef _DEBUG
void CWeek11_12View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek11_12View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek11_12Doc* CWeek11_12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek11_12Doc)));
	return (CWeek11_12Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek11_12View 数据库支持
CRecordset* CWeek11_12View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek11_12View 消息处理程序


void CWeek11_12View::OnShowp()
{
	// TODO: 在此添加控件通知处理程序代码
	CClientDC dc(this);
	CImage img;
	img.Load(m_pSet->column5);
	img.Draw(dc.m_hDC, 500, 0, img.GetWidth(), img.GetHeight());
}
