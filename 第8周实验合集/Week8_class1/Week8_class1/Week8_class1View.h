
// Week8_class1View.h : CWeek8_class1View ��Ľӿ�
//

#pragma once


class CWeek8_class1View : public CView
{
protected: // �������л�����
	CWeek8_class1View();
	DECLARE_DYNCREATE(CWeek8_class1View)

// ����
public:
	CWeek8_class1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek8_class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void Ondlg();
};

#ifndef _DEBUG  // Week8_class1View.cpp �еĵ��԰汾
inline CWeek8_class1Doc* CWeek8_class1View::GetDocument() const
   { return reinterpret_cast<CWeek8_class1Doc*>(m_pDocument); }
#endif

