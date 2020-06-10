
// UsinglibdllView.h : CUsinglibdllView 类的接口
//

#pragma once


class CUsinglibdllView : public CView
{
protected: // 仅从序列化创建
	CUsinglibdllView();
	DECLARE_DYNCREATE(CUsinglibdllView)

// 特性
public:
	CUsinglibdllDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsinglibdllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsinglibdllView.cpp 中的调试版本
inline CUsinglibdllDoc* CUsinglibdllView::GetDocument() const
   { return reinterpret_cast<CUsinglibdllDoc*>(m_pDocument); }
#endif

