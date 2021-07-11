#include <afxwin.h>

class CMyFrame : public CFrameWnd {
public:
	CMyFrame() {
		Create(NULL, _T("MFC APP WINDOW CREATION"));
	}
};

class CWm_Creation : public CWinApp {
	BOOL InitInstance() {
		CMyFrame* Frame = new CMyFrame();
		m_pMainWnd = Frame;

		Frame->ShowWindow(SW_NORMAL);
		Frame->UpdateWindow();
		return TRUE;
	}
};
CWm_Creation theApp;
