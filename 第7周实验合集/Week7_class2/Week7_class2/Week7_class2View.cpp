
// Week7_class2View.cpp : CWeek7_class2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_class2.h"
#endif

#include "Week7_class2Doc.h"
#include "Week7_class2View.h"
#include "Mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_class2View

IMPLEMENT_DYNCREATE(CWeek7_class2View, CView)

BEGIN_MESSAGE_MAP(CWeek7_class2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek7_class2View ����/����

CWeek7_class2View::CWeek7_class2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek7_class2View::~CWeek7_class2View()
{
}

BOOL CWeek7_class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_class2View ����

void CWeek7_class2View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_class2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_class2View ���

#ifdef _DEBUG
void CWeek7_class2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_class2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_class2Doc* CWeek7_class2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_class2Doc)));
	return (CWeek7_class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_class2View ��Ϣ�������


void CWeek7_class2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Mydlg dlg;
	CString s;
	
	int t =dlg.DoModal();
	if (t == IDOK)
	{
	}
	CView::OnLButtonDown(nFlags, point);
}
