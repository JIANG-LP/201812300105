
// Week4_2View.h : CWeek4_2View ��Ľӿ�
//

#pragma once


class CWeek4_2View : public CView
{
protected: // �������л�����
	CWeek4_2View();
	DECLARE_DYNCREATE(CWeek4_2View)

// ����
public:
	CWeek4_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CBitmap m_Bitmap;
	int m_Width;
	int m_Hight;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week4_2View.cpp �еĵ��԰汾
inline CWeek4_2Doc* CWeek4_2View::GetDocument() const
   { return reinterpret_cast<CWeek4_2Doc*>(m_pDocument); }
#endif

