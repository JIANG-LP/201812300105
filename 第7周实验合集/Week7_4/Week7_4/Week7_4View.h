
// Week7_4View.h : CWeek7_4View ��Ľӿ�
//

#pragma once


class CWeek7_4View : public CView
{
protected: // �������л�����
	CWeek7_4View();
	DECLARE_DYNCREATE(CWeek7_4View)

// ����
public:
	CWeek7_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek7_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week7_4View.cpp �еĵ��԰汾
inline CWeek7_4Doc* CWeek7_4View::GetDocument() const
   { return reinterpret_cast<CWeek7_4Doc*>(m_pDocument); }
#endif

