
// HalliGalli_dlgDlg.h : ��� ����
//

#pragma once


// CHalliGalli_dlgDlg ��ȭ ����
class CHalliGalli_dlgDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CHalliGalli_dlgDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.
	int m_level = 1; // 0 ��, 1 ��, 2 ��,  ����Ʈ��  = 1

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HALLIGALLI_DLG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonBellring();
	afx_msg void OnUpdateHigh(CCmdUI *pCmdUI);
	afx_msg void OnUpdateLow(CCmdUI *pCmdUI);
	afx_msg void OnUpdateMiddle(CCmdUI *pCmdUI);
	afx_msg void OnHigh();
	afx_msg void OnLow();
	afx_msg void OnMiddle();
	afx_msg void OnExit();
};
