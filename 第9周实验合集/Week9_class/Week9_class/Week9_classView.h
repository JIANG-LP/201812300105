
// Week9_classView.h : CWeek9_classView ��Ľӿ�
//

#pragma once


class CWeek9_classView : public CView
{
protected: // �������л�����
	CWeek9_classView();
	DECLARE_DYNCREATE(CWeek9_classView)

// ����
public:
	CWeek9_classDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9_classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileName();
	afx_msg void OnFileSave();
	afx_msg void OnFileOpen();

};

#ifndef _DEBUG  // Week9_classView.cpp �еĵ��԰汾
inline CWeek9_classDoc* CWeek9_classView::GetDocument() const
   { return reinterpret_cast<CWeek9_classDoc*>(m_pDocument); }
#endif