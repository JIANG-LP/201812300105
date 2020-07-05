
// Week9_classView.h : CWeek9_classView 类的接口
//

#pragma once


class CWeek9_classView : public CView
{
protected: // 仅从序列化创建
	CWeek9_classView();
	DECLARE_DYNCREATE(CWeek9_classView)

// 特性
public:
	CWeek9_classDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek9_classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileName();
	afx_msg void OnFileSave();
	afx_msg void OnFileOpen();

};

#ifndef _DEBUG  // Week9_classView.cpp 中的调试版本
inline CWeek9_classDoc* CWeek9_classView::GetDocument() const
   { return reinterpret_cast<CWeek9_classDoc*>(m_pDocument); }
#endif