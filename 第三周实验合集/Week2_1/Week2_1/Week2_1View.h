
// Week2_1View.h : CWeek2_1View 类的接口
//

#pragma once


class CWeek2_1View : public CView
{
protected: // 仅从序列化创建
	CWeek2_1View();
	DECLARE_DYNCREATE(CWeek2_1View)

// 特性
public:
	CWeek2_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek2_1View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_1View.cpp 中的调试版本
inline CWeek2_1Doc* CWeek2_1View::GetDocument() const
   { return reinterpret_cast<CWeek2_1Doc*>(m_pDocument); }
#endif

