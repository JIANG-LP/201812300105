
// Week7_3View.h : CWeek7_3View ��Ľӿ�
//

#pragma once


class CWeek7_3View : public CView
{
protected: // �������л�����
	CWeek7_3View();
	DECLARE_DYNCREATE(CWeek7_3View)

// ����
public:
	CWeek7_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek7_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	bool set;
	int flag = 0;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // Week7_3View.cpp �еĵ��԰汾
inline CWeek7_3Doc* CWeek7_3View::GetDocument() const
   { return reinterpret_cast<CWeek7_3Doc*>(m_pDocument); }
#endif

