
// UsinglibdllView.cpp : CUsinglibdllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Usinglibdll.h"
#endif

#include "UsinglibdllDoc.h"
#include "UsinglibdllView.h"
#include "f1.h"
#include "W32D.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsinglibdllView

IMPLEMENT_DYNCREATE(CUsinglibdllView, CView)

BEGIN_MESSAGE_MAP(CUsinglibdllView, CView)
END_MESSAGE_MAP()

// CUsinglibdllView ����/����

CUsinglibdllView::CUsinglibdllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsinglibdllView::~CUsinglibdllView()
{
}

BOOL CUsinglibdllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsinglibdllView ����

void CUsinglibdllView::OnDraw(CDC* pDC)
{
	CUsinglibdllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	int a = factorial(5);
	s.Format(_T("%d"), a);
	pDC->TextOutW(200, 150, s);

	FAC fac;
	CString ss;
	ss.Format(_T("%f"), fac.convert(30.0));
	pDC->TextOutW(200, 200, ss);

	CString s1;
	int a1 = factorial1(5);
	s1.Format(_T("%d"), a1);
	pDC->TextOutW(200, 250, s1);

	FAC1 fac1;
	CString ss1;
	ss1.Format(_T("%f"), fac1.convert(30.0));
	pDC->TextOutW(200, 300, ss1);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUsinglibdllView ���

#ifdef _DEBUG
void CUsinglibdllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsinglibdllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsinglibdllDoc* CUsinglibdllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsinglibdllDoc)));
	return (CUsinglibdllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsinglibdllView ��Ϣ�������
