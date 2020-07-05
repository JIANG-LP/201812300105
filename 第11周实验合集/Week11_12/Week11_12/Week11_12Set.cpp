
// Week11_12Set.cpp : CWeek11_12Set ���ʵ��
//

#include "stdafx.h"
#include "Week11_12.h"
#include "Week11_12Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11_12Set ʵ��

// ���������� 2020��6��12��, 12:15

IMPLEMENT_DYNAMIC(CWeek11_12Set, CRecordset)

CWeek11_12Set::CWeek11_12Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek11_12Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=D:\\VC++\x5b9e\x9a8c\\db1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek11_12Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CWeek11_12Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[����]"), column3);
	RFX_Text(pFX, _T("[�绰����]"), column4);
	RFX_Text(pFX, _T("[��Ƭ·��]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek11_12Set ���

#ifdef _DEBUG
void CWeek11_12Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek11_12Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

