
// Week4_2View.h : CWeek4_2View 类的接口
//

#pragma once


class CWeek4_2View : public CView
{
protected: // 仅从序列化创建
	CWeek4_2View();
	DECLARE_DYNCREATE(CWeek4_2View)

// 特性
public:
	CWeek4_2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek4_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CBitmap m_Bitmap;
	int m_Width;
	int m_Hight;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week4_2View.cpp 中的调试版本
inline CWeek4_2Doc* CWeek4_2View::GetDocument() const
   { return reinterpret_cast<CWeek4_2Doc*>(m_pDocument); }
#endif

