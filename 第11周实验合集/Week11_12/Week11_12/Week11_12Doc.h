
// Week11_12Doc.h : CWeek11_12Doc ��Ľӿ�
//


#pragma once
#include "Week11_12Set.h"


class CWeek11_12Doc : public CDocument
{
protected: // �������л�����
	CWeek11_12Doc();
	DECLARE_DYNCREATE(CWeek11_12Doc)

// ����
public:
	CWeek11_12Set m_Week11_12Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeek11_12Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
