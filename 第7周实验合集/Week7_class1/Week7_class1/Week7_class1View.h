
// Week7_class1View.h : CWeek7_class1View 类的接口
//

#pragma once


class CWeek7_class1View : public CView
{
protected: // 仅从序列化创建
	CWeek7_class1View();
	DECLARE_DYNCREATE(CWeek7_class1View)

// 特性
public:
	CWeek7_class1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek7_class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week7_class1View.cpp 中的调试版本
inline CWeek7_class1Doc* CWeek7_class1View::GetDocument() const
   { return reinterpret_cast<CWeek7_class1Doc*>(m_pDocument); }
#endif

