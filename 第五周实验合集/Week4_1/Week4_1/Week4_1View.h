
// Week4_1View.h : CWeek4_1View ��Ľӿ�
//

#pragma once


class CWeek4_1View : public CView
{
protected: // �������л�����
	CWeek4_1View();
	DECLARE_DYNCREATE(CWeek4_1View)

// ����
public:
	CWeek4_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // Week4_1View.cpp �еĵ��԰汾
inline CWeek4_1Doc* CWeek4_1View::GetDocument() const
   { return reinterpret_cast<CWeek4_1Doc*>(m_pDocument); }
#endif

