
// Week2_3plusView.h : CWeek2_3plusView 类的接口
//

#pragma once


class CWeek2_3plusView : public CView
{
protected: // 仅从序列化创建
	CWeek2_3plusView();
	DECLARE_DYNCREATE(CWeek2_3plusView)

// 特性
public:
	CWeek2_3plusDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek2_3plusView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int count = 0;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_3plusView.cpp 中的调试版本
inline CWeek2_3plusDoc* CWeek2_3plusView::GetDocument() const
   { return reinterpret_cast<CWeek2_3plusDoc*>(m_pDocument); }
#endif

