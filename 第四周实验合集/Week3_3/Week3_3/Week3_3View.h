
// Week3_3View.h : CWeek3_3View ��Ľӿ�
//

#pragma once


class CWeek3_3View : public CView
{
protected: // �������л�����
	CWeek3_3View();
	DECLARE_DYNCREATE(CWeek3_3View)

// ����
public:
	CWeek3_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek3_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	bool set;
	int flag = 0;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // Week3_3View.cpp �еĵ��԰汾
inline CWeek3_3Doc* CWeek3_3View::GetDocument() const
   { return reinterpret_cast<CWeek3_3Doc*>(m_pDocument); }
#endif

