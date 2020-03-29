
// Week2_3plusDoc.h : CWeek2_3plusDoc 类的接口
//


#pragma once


class CWeek2_3plusDoc : public CDocument
{
protected: // 仅从序列化创建
	CWeek2_3plusDoc();
	DECLARE_DYNCREATE(CWeek2_3plusDoc)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CWeek2_3plusDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect ar;
	CRect br;
	CRect cr;
	CRect dr;

	int i;
	int j;
	int k;

	CString s1;
	CString s2;
	CString s3;
	CString s4;
	CString add;
	CString sub;
	CString mul;
	CString did;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
