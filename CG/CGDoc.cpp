// CGDoc.cpp : implementation of the CCGDoc class
//

#include "stdafx.h"
#include "CG.h"

#include "CGDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCGDoc

IMPLEMENT_DYNCREATE(CCGDoc, CDocument)

BEGIN_MESSAGE_MAP(CCGDoc, CDocument)
	//{{AFX_MSG_MAP(CCGDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCGDoc construction/destruction

CCGDoc::CCGDoc()
{
	// TODO: add one-time construction code here

}

CCGDoc::~CCGDoc()
{
}

BOOL CCGDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCGDoc serialization

void CCGDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CCGDoc diagnostics

#ifdef _DEBUG
void CCGDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCGDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCGDoc commands
