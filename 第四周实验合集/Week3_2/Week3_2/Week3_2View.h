
// Week3_2View.h : CWeek3_2View ��Ľӿ�
//

#pragma once


class CWeek3_2View : public CView
{
protected: // �������л�����
	CWeek3_2View();
	DECLARE_DYNCREATE(CWeek3_2View)

// ����
public:
	CWeek3_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek3_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week3_2View.cpp �еĵ��԰汾
inline CWeek3_2Doc* CWeek3_2View::GetDocument() const
   { return reinterpret_cast<CWeek3_2Doc*>(m_pDocument); }
#endif

