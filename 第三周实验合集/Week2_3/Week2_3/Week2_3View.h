
// Week2_3View.h : CWeek2_3View ��Ľӿ�
//

#pragma once


class CWeek2_3View : public CView
{
protected: // �������л�����
	CWeek2_3View();
	DECLARE_DYNCREATE(CWeek2_3View)

// ����
public:
	CWeek2_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek2_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int i;
	int j;
	int k;
	int x, y;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_3View.cpp �еĵ��԰汾
inline CWeek2_3Doc* CWeek2_3View::GetDocument() const
   { return reinterpret_cast<CWeek2_3Doc*>(m_pDocument); }
#endif

