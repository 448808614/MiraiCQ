// MiraiContrlDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MiraiQQ.h"
#include "MiraiContrlDlg.h"
#include "MiraiPlugsDlg.h"
#include "MiraiQ/MIraiQ.h"


// CMiraiContrlDlg �Ի���

IMPLEMENT_DYNAMIC(CMiraiContrlDlg, CDialog)

CMiraiContrlDlg::CMiraiContrlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMiraiContrlDlg::IDD, pParent)
{

}

CMiraiContrlDlg::~CMiraiContrlDlg()
{
}

void CMiraiContrlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMiraiContrlDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON3, &CMiraiContrlDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMiraiContrlDlg::OnBnClickedButton4)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CMiraiContrlDlg ��Ϣ�������

void CMiraiContrlDlg::OnBnClickedButton3()
{
	CMiraiPlugsDlg dlg;
	dlg.DoModal();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void CMiraiContrlDlg::OnBnClickedButton4()
{
	if(MiraiQ::getInstance()->is_bot_connect() == MIRAIQ_BOT_IS_CONNECT)
	{
		AfxMessageBox("websocket�Ѿ��ɹ�����");
	}else
	{
		AfxMessageBox("websocketû�гɹ�����");
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void CMiraiContrlDlg::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	HANDLE hself = GetCurrentProcess();
	TerminateProcess(hself, 0);
	CDialog::OnClose();
}
