// CGView.h : interface of the CCGView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CGVIEW_H__2CBDA2E6_08CF_474A_9806_F1742F2C93E0__INCLUDED_)
#define AFX_CGVIEW_H__2CBDA2E6_08CF_474A_9806_F1742F2C93E0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCGView : public CView
{
protected: // create from serialization only
	CCGView();
	DECLARE_DYNCREATE(CCGView)

// Attributes
public:
	CCGDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCGView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCGView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCGView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CGView.cpp
inline CCGDoc* CCGView::GetDocument()
   { return (CCGDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CGVIEW_H__2CBDA2E6_08CF_474A_9806_F1742F2C93E0__INCLUDED_)
