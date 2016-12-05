
// HalliGalli_dlgDlg.h : 헤더 파일
//

#pragma once


// CHalliGalli_dlgDlg 대화 상자
class CHalliGalli_dlgDlg : public CDialogEx
{
// 생성입니다.
public:
	CHalliGalli_dlgDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.
	int m_level = 1; // 0 상, 1 중, 2 하,  디폴트값  = 1

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HALLIGALLI_DLG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
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
