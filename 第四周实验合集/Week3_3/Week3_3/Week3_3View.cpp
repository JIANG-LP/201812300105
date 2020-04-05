
// Week3_3View.cpp : CWeek3_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_3.h"
#endif

#include "Week3_3Doc.h"
#include "Week3_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_3View

IMPLEMENT_DYNCREATE(CWeek3_3View, CView)

BEGIN_MESSAGE_MAP(CWeek3_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek3_3View ����/����

CWeek3_3View::CWeek3_3View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
}

CWeek3_3View::~CWeek3_3View()
{
}

BOOL CWeek3_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_3View ����

void CWeek3_3View::OnDraw(CDC* pDC)
{
	CWeek3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect client;
	GetClientRect(&client);

	if (set)
	{
		SetTimer(1,500,NULL);
		if(pDoc->r.bottom>=client.bottom-client.top)
		set = false;
	}
	
	pDC->Ellipse(pDoc->r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_3View ���

#ifdef _DEBUG
void CWeek3_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_3Doc* CWeek3_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_3Doc)));
	return (CWeek3_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_3View ��Ϣ�������


void CWeek3_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect client;
	GetClientRect(&client);
	CWeek3_3Doc* pDoc = GetDocument();
	pDoc->r.top += 50;
	pDoc->r.bottom += 50;
	if ((pDoc->r.bottom >= client.bottom)||flag==1)
	{
		flag = 1;
		pDoc->r.bottom = pDoc->r.bottom -100;
		pDoc->r.top -= 100;
	}
	if ((pDoc->r.top <= 0) || flag == 2)
	{
		flag =2;
	}


	Invalidate();
	CView::OnTimer(nIDEvent);
}
