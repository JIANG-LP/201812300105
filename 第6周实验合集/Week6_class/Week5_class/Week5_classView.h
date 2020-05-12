
// Week5_classView.h : CWeek5_classView 类的接口
//

#pragma once


class CWeek5_classView : public CView
{
protected: // 仅从序列化创建
	CWeek5_classView();
	DECLARE_DYNCREATE(CWeek5_classView)

// 特性
public:
	CWeek5_classDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek5_classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Week5_classView.cpp 中的调试版本
inline CWeek5_classDoc* CWeek5_classView::GetDocument() const
   { return reinterpret_cast<CWeek5_classDoc*>(m_pDocument); }
#endif

