// CGDoc.h : interface of the CCGDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CGDOC_H__E95CAFC2_66CF_447C_AA86_05B0240632A8__INCLUDED_)
#define AFX_CGDOC_H__E95CAFC2_66CF_447C_AA86_05B0240632A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCGDoc : public CDocument
{
protected: // create from serialization only
	CCGDoc();
	DECLARE_DYNCREATE(CCGDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCGDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCGDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCGDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CGDOC_H__E95CAFC2_66CF_447C_AA86_05B0240632A8__INCLUDED_)
