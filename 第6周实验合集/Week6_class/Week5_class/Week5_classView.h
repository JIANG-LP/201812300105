
// Week5_classView.h : CWeek5_classView ��Ľӿ�
//

#pragma once


class CWeek5_classView : public CView
{
protected: // �������л�����
	CWeek5_classView();
	DECLARE_DYNCREATE(CWeek5_classView)

// ����
public:
	CWeek5_classDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek5_classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Week5_classView.cpp �еĵ��԰汾
inline CWeek5_classDoc* CWeek5_classView::GetDocument() const
   { return reinterpret_cast<CWeek5_classDoc*>(m_pDocument); }
#endif

