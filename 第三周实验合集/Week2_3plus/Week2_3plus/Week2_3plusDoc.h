
// Week2_3plusDoc.h : CWeek2_3plusDoc ��Ľӿ�
//


#pragma once


class CWeek2_3plusDoc : public CDocument
{
protected: // �������л�����
	CWeek2_3plusDoc();
	DECLARE_DYNCREATE(CWeek2_3plusDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
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

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
