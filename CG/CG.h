// CG.h : main header file for the CG application
//

#if !defined(AFX_CG_H__4994A126_E5D2_4E3F_A2EB_40227E79D2B5__INCLUDED_)
#define AFX_CG_H__4994A126_E5D2_4E3F_A2EB_40227E79D2B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCGApp:
// See CG.cpp for the implementation of this class
//

class CCGApp : public CWinApp
{
public:
	CCGApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCGApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCGApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CG_H__4994A126_E5D2_4E3F_A2EB_40227E79D2B5__INCLUDED_)
