
// Week4_1View.cpp : CWeek4_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CWeek4_1View ����/����

CWeek4_1View::CWeek4_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek4_1View::~CWeek4_1View()
{
}

BOOL CWeek4_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_1View ����

void CWeek4_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek4_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_1View ���

#ifdef _DEBUG
void CWeek4_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_1Doc* CWeek4_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_1Doc)));
	return (CWeek4_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_1View ��Ϣ�������


void CWeek4_1View::OnShowname()
{
	// TODO: �ڴ���������������
	CString name = _T("����Ƽ");
	CClientDC dc(this);
	dc.TextOutW(200,200,name);
}
