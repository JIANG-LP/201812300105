
// Week3_1View.h : CWeek3_1View ��Ľӿ�
//

#pragma once


class CWeek3_1View : public CView
{
protected: // �������л�����
	CWeek3_1View();
	DECLARE_DYNCREATE(CWeek3_1View)

// ����
public:
	CWeek3_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek3_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int x;
	int y;
	int flag = 1;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week3_1View.cpp �еĵ��԰汾
inline CWeek3_1Doc* CWeek3_1View::GetDocument() const
   { return reinterpret_cast<CWeek3_1Doc*>(m_pDocument); }
#endif

