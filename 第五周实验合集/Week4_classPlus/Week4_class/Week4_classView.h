
// Week4_classView.h : CWeek4_classView 类的接口
//

#pragma once


class CWeek4_classView : public CView
{
protected: // 仅从序列化创建
	CWeek4_classView();
	DECLARE_DYNCREATE(CWeek4_classView)

// 特性
public:
	CWeek4_classDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
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

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowcr();
};

#ifndef _DEBUG  // Week4_classView.cpp 中的调试版本
inline CWeek4_classDoc* CWeek4_classView::GetDocument() const
   { return reinterpret_cast<CWeek4_classDoc*>(m_pDocument); }
#endif

