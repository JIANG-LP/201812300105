
// Week5_1View.h : CWeek5_1View 类的接口
//

#pragma once


class CWeek5_1View : public CView
{
protected: // 仅从序列化创建
	CWeek5_1View();
	DECLARE_DYNCREATE(CWeek5_1View)

// 特性
public:
	CWeek5_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek5_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect r;
	CString s,s1;
	int x=155, y=155;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // Week5_1View.cpp 中的调试版本
inline CWeek5_1Doc* CWeek5_1View::GetDocument() const
   { return reinterpret_cast<CWeek5_1Doc*>(m_pDocument); }
#endif

