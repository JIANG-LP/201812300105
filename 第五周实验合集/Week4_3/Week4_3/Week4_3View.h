
// Week4_3View.h : CWeek4_3View ��Ľӿ�
//

#pragma once


class CWeek4_3View : public CView
{
protected: // �������л�����
	CWeek4_3View();
	DECLARE_DYNCREATE(CWeek4_3View)

// ����
public:
	CWeek4_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint pd;
	CPoint pu;
	CRect dr;
	int flag = 0;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDrawrect();
	afx_msg void OnEclipse();
};

#ifndef _DEBUG  // Week4_3View.cpp �еĵ��԰汾
inline CWeek4_3Doc* CWeek4_3View::GetDocument() const
   { return reinterpret_cast<CWeek4_3Doc*>(m_pDocument); }
#endif

