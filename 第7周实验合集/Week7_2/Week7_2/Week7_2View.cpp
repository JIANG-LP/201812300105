
// Week7_2View.cpp : CWeek7_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CWeek7_2View ����/����

CWeek7_2View::CWeek7_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek7_2View::~CWeek7_2View()
{
}

BOOL CWeek7_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_2View ����

void CWeek7_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_2View ���

#ifdef _DEBUG
void CWeek7_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_2Doc* CWeek7_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_2Doc)));
	return (CWeek7_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_2View ��Ϣ�������


void CWeek7_2View::OnPlus()
{
	// TODO: �ڴ���������������
	Plusdlg dlg;
	int t = dlg.DoModal();
	if(t==IDOK)
	{

	}

}
