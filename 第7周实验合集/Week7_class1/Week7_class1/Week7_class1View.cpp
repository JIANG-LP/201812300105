
// Week7_class1View.cpp : CWeek7_class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_class1.h"
#endif

#include "Week7_class1Doc.h"
#include "Week7_class1View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_class1View

IMPLEMENT_DYNCREATE(CWeek7_class1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_class1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek7_class1View ����/����

CWeek7_class1View::CWeek7_class1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek7_class1View::~CWeek7_class1View()
{
}

BOOL CWeek7_class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_class1View ����

void CWeek7_class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_class1View ���

#ifdef _DEBUG
void CWeek7_class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_class1Doc* CWeek7_class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_class1Doc)));
	return (CWeek7_class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_class1View ��Ϣ�������


void CWeek7_class1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg0 dlg;
	CClientDC dc(this);
	CString s = _T("�����˳��Ի���");
	int t = dlg.DoModal();
	if (t != IDOK)
	{
		dc.TextOutW(200, 200, s);
	}
	CView::OnLButtonDown(nFlags, point);
}
