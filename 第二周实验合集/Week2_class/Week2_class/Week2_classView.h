
// Week2_classView.h : CWeek2_classView ��Ľӿ�
//

#pragma once


class CWeek2_classView : public CView
{
protected: // �������л�����
	CWeek2_classView();
	DECLARE_DYNCREATE(CWeek2_classView)

// ����
public:
	CWeek2_classDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek2_classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	CRect dr;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_classView.cpp �еĵ��԰汾
inline CWeek2_classDoc* CWeek2_classView::GetDocument() const
   { return reinterpret_cast<CWeek2_classDoc*>(m_pDocument); }
#endif

