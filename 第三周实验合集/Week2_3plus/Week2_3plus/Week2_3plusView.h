
// Week2_3plusView.h : CWeek2_3plusView ��Ľӿ�
//

#pragma once


class CWeek2_3plusView : public CView
{
protected: // �������л�����
	CWeek2_3plusView();
	DECLARE_DYNCREATE(CWeek2_3plusView)

// ����
public:
	CWeek2_3plusDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek2_3plusView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int count = 0;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_3plusView.cpp �еĵ��԰汾
inline CWeek2_3plusDoc* CWeek2_3plusView::GetDocument() const
   { return reinterpret_cast<CWeek2_3plusDoc*>(m_pDocument); }
#endif

