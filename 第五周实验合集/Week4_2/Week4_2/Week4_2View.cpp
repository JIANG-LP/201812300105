
// Week4_2View.cpp : CWeek4_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4_2.h"
#endif

#include "Week4_2Doc.h"
#include "Week4_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_2View

IMPLEMENT_DYNCREATE(CWeek4_2View, CView)

BEGIN_MESSAGE_MAP(CWeek4_2View, CView)
END_MESSAGE_MAP()

// CWeek4_2View ����/����

CWeek4_2View::CWeek4_2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_Width = BM.bmWidth;
	m_Hight = BM.bmHeight;
}

CWeek4_2View::~CWeek4_2View()
{
}

BOOL CWeek4_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_2View ����

void CWeek4_2View::OnDraw(CDC* pDC)
{
	CWeek4_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0,0,m_Width,m_Hight,&MemDC,0,0,SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_2View ���

#ifdef _DEBUG
void CWeek4_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_2Doc* CWeek4_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_2Doc)));
	return (CWeek4_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_2View ��Ϣ�������
