
// Week7_class1View.h : CWeek7_class1View ��Ľӿ�
//

#pragma once


class CWeek7_class1View : public CView
{
protected: // �������л�����
	CWeek7_class1View();
	DECLARE_DYNCREATE(CWeek7_class1View)

// ����
public:
	CWeek7_class1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek7_class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week7_class1View.cpp �еĵ��԰汾
inline CWeek7_class1Doc* CWeek7_class1View::GetDocument() const
   { return reinterpret_cast<CWeek7_class1Doc*>(m_pDocument); }
#endif

