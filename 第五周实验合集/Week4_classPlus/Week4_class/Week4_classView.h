
// Week4_classView.h : CWeek4_classView ��Ľӿ�
//

#pragma once


class CWeek4_classView : public CView
{
protected: // �������л�����
	CWeek4_classView();
	DECLARE_DYNCREATE(CWeek4_classView)

// ����
public:
	CWeek4_classDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	int red;
	int green;
	int blue;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowcr();
};

#ifndef _DEBUG  // Week4_classView.cpp �еĵ��԰汾
inline CWeek4_classDoc* CWeek4_classView::GetDocument() const
   { return reinterpret_cast<CWeek4_classDoc*>(m_pDocument); }
#endif

