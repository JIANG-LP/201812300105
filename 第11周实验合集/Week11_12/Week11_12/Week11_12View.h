
// Week11_12View.h : CWeek11_12View 类的接口
//

#pragma once

class CWeek11_12Set;

class CWeek11_12View : public CRecordView
{
protected: // 仅从序列化创建
	CWeek11_12View();
	DECLARE_DYNCREATE(CWeek11_12View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_12_FORM };
#endif
	CWeek11_12Set* m_pSet;

// 特性
public:
	CWeek11_12Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CWeek11_12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString num;
	CString age;
	CString phonenum;
	afx_msg void OnShowp();
};

#ifndef _DEBUG  // Week11_12View.cpp 中的调试版本
inline CWeek11_12Doc* CWeek11_12View::GetDocument() const
   { return reinterpret_cast<CWeek11_12Doc*>(m_pDocument); }
#endif

