
// Week7_3View.h : CWeek7_3View 类的接口
//

#pragma once


class CWeek7_3View : public CView
{
protected: // 仅从序列化创建
	CWeek7_3View();
	DECLARE_DYNCREATE(CWeek7_3View)

// 特性
public:
	CWeek7_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek7_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	bool set;
	int flag = 0;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // Week7_3View.cpp 中的调试版本
inline CWeek7_3Doc* CWeek7_3View::GetDocument() const
   { return reinterpret_cast<CWeek7_3Doc*>(m_pDocument); }
#endif

