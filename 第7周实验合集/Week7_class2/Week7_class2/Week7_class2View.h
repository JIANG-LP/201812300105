
// Week7_class2View.h : CWeek7_class2View 类的接口
//

#pragma once


class CWeek7_class2View : public CView
{
protected: // 仅从序列化创建
	CWeek7_class2View();
	DECLARE_DYNCREATE(CWeek7_class2View)

// 特性
public:
	CWeek7_class2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek7_class2View();
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

#ifndef _DEBUG  // Week7_class2View.cpp 中的调试版本
inline CWeek7_class2Doc* CWeek7_class2View::GetDocument() const
   { return reinterpret_cast<CWeek7_class2Doc*>(m_pDocument); }
#endif

