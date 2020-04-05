
// Week4_3View.h : CWeek4_3View 类的接口
//

#pragma once


class CWeek4_3View : public CView
{
protected: // 仅从序列化创建
	CWeek4_3View();
	DECLARE_DYNCREATE(CWeek4_3View)

// 特性
public:
	CWeek4_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek4_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint pd;
	CPoint pu;
	CRect dr;
	int flag = 0;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDrawrect();
	afx_msg void OnEclipse();
};

#ifndef _DEBUG  // Week4_3View.cpp 中的调试版本
inline CWeek4_3Doc* CWeek4_3View::GetDocument() const
   { return reinterpret_cast<CWeek4_3Doc*>(m_pDocument); }
#endif

