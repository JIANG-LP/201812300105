
// Week7_4View.h : CWeek7_4View 类的接口
//

#pragma once


class CWeek7_4View : public CView
{
protected: // 仅从序列化创建
	CWeek7_4View();
	DECLARE_DYNCREATE(CWeek7_4View)

// 特性
public:
	CWeek7_4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek7_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week7_4View.cpp 中的调试版本
inline CWeek7_4Doc* CWeek7_4View::GetDocument() const
   { return reinterpret_cast<CWeek7_4Doc*>(m_pDocument); }
#endif

