
// Week11_12Doc.h : CWeek11_12Doc 类的接口
//


#pragma once
#include "Week11_12Set.h"


class CWeek11_12Doc : public CDocument
{
protected: // 仅从序列化创建
	CWeek11_12Doc();
	DECLARE_DYNCREATE(CWeek11_12Doc)

// 特性
public:
	CWeek11_12Set m_Week11_12Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CWeek11_12Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
