
// Week2_3plusDoc.cpp : CWeek2_3plusDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_3plus.h"
#endif

#include "Week2_3plusDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CWeek2_3plusDoc

IMPLEMENT_DYNCREATE(CWeek2_3plusDoc, CDocument)

BEGIN_MESSAGE_MAP(CWeek2_3plusDoc, CDocument)
END_MESSAGE_MAP()


// CWeek2_3plusDoc ����/����

CWeek2_3plusDoc::CWeek2_3plusDoc()
{
	// TODO: �ڴ����һ���Թ������
	ar.left = 100;
	ar.top = 100;
	ar.right = 300;
	ar.bottom = 300;
	br.left = 400;
	br.top = 100;
	br.right = 600;
	br.bottom = 300;
	cr.left = 700;
	cr.top = 100;
	cr.right = 900;
	cr.bottom = 300;
	dr.left = 200;
	dr.top = 350;
	dr.right = 800;
	dr.bottom = 450;

	s4 = _T("������Ч");
	add = _T("��");
	sub = _T("��");
	mul = _T("��");
	did = _T("��");
}

CWeek2_3plusDoc::~CWeek2_3plusDoc()
{
}

BOOL CWeek2_3plusDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CWeek2_3plusDoc ���л�

void CWeek2_3plusDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CWeek2_3plusDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CWeek2_3plusDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CWeek2_3plusDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CWeek2_3plusDoc ���

#ifdef _DEBUG
void CWeek2_3plusDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWeek2_3plusDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CWeek2_3plusDoc ����
