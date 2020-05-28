
// Week8_class1View.cpp : CWeek8_class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week8_class1.h"
#endif


#include "Week8_class1Doc.h"
#include "Week8_class1View.h"
#include "Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek8_class1View

IMPLEMENT_DYNCREATE(CWeek8_class1View, CView)

BEGIN_MESSAGE_MAP(CWeek8_class1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_dlg, &CWeek8_class1View::Ondlg)
END_MESSAGE_MAP()


// CWeek8_class1View ����/����

CWeek8_class1View::CWeek8_class1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek8_class1View::~CWeek8_class1View()
{
}

BOOL CWeek8_class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek8_class1View ����

void CWeek8_class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek8_class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek8_class1View ���

#ifdef _DEBUG
void CWeek8_class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek8_class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek8_class1Doc* CWeek8_class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek8_class1Doc)));
	return (CWeek8_class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek8_class1View ��Ϣ�������


void CWeek8_class1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek8_class1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
	    pDoc->s = cfd.GetFileName();
		GetDC()->TextOutW(200,200,pDoc->s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek8_class1View::Ondlg()
{
	// TODO: �ڴ���������������
	CWeek8_class1Doc* pDoc = GetDocument();
	Dlg dlg;
	dlg.filename = pDoc->s;
	int t = dlg.DoModal();

}
