
// Week8_2View.h : CWeek8_2View ��Ľӿ�
//

#pragma once


class CWeek8_2View : public CView
{
protected: // �������л�����
	CWeek8_2View();
	DECLARE_DYNCREATE(CWeek8_2View)

// ����
public:
	CWeek8_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek8_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	CRect dr;
	int flag;
	int red;
	int blue;
	int green;
	int color = RGB(red, green, blue);
	int width;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnEclipse();
	afx_msg void OnColor();
};

#ifndef _DEBUG  // Week8_2View.cpp �еĵ��԰汾
inline CWeek8_2Doc* CWeek8_2View::GetDocument() const
   { return reinterpret_cast<CWeek8_2Doc*>(m_pDocument); }
#endif

