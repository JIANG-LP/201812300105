
// UsinglibdllView.h : CUsinglibdllView ��Ľӿ�
//

#pragma once


class CUsinglibdllView : public CView
{
protected: // �������л�����
	CUsinglibdllView();
	DECLARE_DYNCREATE(CUsinglibdllView)

// ����
public:
	CUsinglibdllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsinglibdllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsinglibdllView.cpp �еĵ��԰汾
inline CUsinglibdllDoc* CUsinglibdllView::GetDocument() const
   { return reinterpret_cast<CUsinglibdllDoc*>(m_pDocument); }
#endif

