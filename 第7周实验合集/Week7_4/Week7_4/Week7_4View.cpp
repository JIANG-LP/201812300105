
// Week7_4View.cpp : CWeek7_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_4.h"
#endif

#include "Week7_4Doc.h"
#include "Week7_4View.h"
#include "Mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_4View

IMPLEMENT_DYNCREATE(CWeek7_4View, CView)

BEGIN_MESSAGE_MAP(CWeek7_4View, CView)
END_MESSAGE_MAP()

// CWeek7_4View ����/����

CWeek7_4View::CWeek7_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek7_4View::~CWeek7_4View()
{
}

BOOL CWeek7_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_4View ����

void CWeek7_4View::OnDraw(CDC* pDC)
{
	CWeek7_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	Mydlg dlg;
	int t = dlg.DoModal();

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_4View ���

#ifdef _DEBUG
void CWeek7_4View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_4Doc* CWeek7_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_4Doc)));
	return (CWeek7_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_4View ��Ϣ�������
