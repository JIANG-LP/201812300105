
// Week8_1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Week8_1.h"
#include "Week8_1Dlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CWeek8_1Dlg 对话框



CWeek8_1Dlg::CWeek8_1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_WEEK8_1_DIALOG, pParent)
	, result(0)
	, input(0)
	, input2(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CWeek8_1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, result);
	DDX_Text(pDX, IDC_EDIT2, input);
	DDX_Text(pDX, IDC_EDIT4, input2);
}

BEGIN_MESSAGE_MAP(CWeek8_1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek8_1Dlg::onPlus)
	ON_BN_CLICKED(IDC_BUTTON2, &CWeek8_1Dlg::OnSub)
	
	ON_BN_CLICKED(IDC_BUTTON4, &CWeek8_1Dlg::OnMul)
	ON_BN_CLICKED(IDC_BUTTON5, &CWeek8_1Dlg::OnDiv)

	ON_BN_CLICKED(IDC_BUTTON7, &CWeek8_1Dlg::OnSqrt)
	ON_BN_CLICKED(IDC_BUTTON8, &CWeek8_1Dlg::OnRep)
END_MESSAGE_MAP()


// CWeek8_1Dlg 消息处理程序

BOOL CWeek8_1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CWeek8_1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CWeek8_1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CWeek8_1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CWeek8_1Dlg::onPlus()//加法
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	//input = result;
	result = input+input2;
	this->UpdateData(false);
}


void CWeek8_1Dlg::OnSub()//减法
{
	// TODO: 在此添加控件通知处理程序代码
    this->UpdateData(true);
	//input = result;
	result = input-input2;
    this->UpdateData(false);
}





void CWeek8_1Dlg::OnMul()//乘法
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	result = input*input2;
	this->UpdateData(false);
}


void CWeek8_1Dlg::OnDiv()//除法
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	result = input/input2;
	this->UpdateData(false);
}



void CWeek8_1Dlg::OnSqrt()//开平方
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	result = sqrt(input);//
	this->UpdateData(false);
}


void CWeek8_1Dlg::OnRep()//求倒数
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	result = 1 / input;
	this->UpdateData(false);
}
