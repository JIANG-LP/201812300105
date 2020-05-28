
// Week8_2View.h : CWeek8_2View 类的接口
//

#pragma once


class CWeek8_2View : public CView
{
protected: // 仅从序列化创建
	CWeek8_2View();
	DECLARE_DYNCREATE(CWeek8_2View)

// 特性
public:
	CWeek8_2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek8_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	CRect dr;
	int flag;
	int red;
	int blue;
	int green;
	int color = RGB(red, green, blue);
	int width;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnEclipse();
	afx_msg void OnColor();
};

#ifndef _DEBUG  // Week8_2View.cpp 中的调试版本
inline CWeek8_2Doc* CWeek8_2View::GetDocument() const
   { return reinterpret_cast<CWeek8_2Doc*>(m_pDocument); }
#endif

