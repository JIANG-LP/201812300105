
// Week11_12View.h : CWeek11_12View ��Ľӿ�
//

#pragma once

class CWeek11_12Set;

class CWeek11_12View : public CRecordView
{
protected: // �������л�����
	CWeek11_12View();
	DECLARE_DYNCREATE(CWeek11_12View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_12_FORM };
#endif
	CWeek11_12Set* m_pSet;

// ����
public:
	CWeek11_12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWeek11_12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // Week11_12View.cpp �еĵ��԰汾
inline CWeek11_12Doc* CWeek11_12View::GetDocument() const
   { return reinterpret_cast<CWeek11_12Doc*>(m_pDocument); }
#endif

