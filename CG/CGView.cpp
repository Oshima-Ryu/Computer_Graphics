// CGView.cpp : implementation of the CCGView class
//

#include "stdafx.h"
#include "CG.h"

#include "CGDoc.h"
#include "CGView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCGView

IMPLEMENT_DYNCREATE(CCGView, CView)

BEGIN_MESSAGE_MAP(CCGView, CView)
	//{{AFX_MSG_MAP(CCGView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCGView construction/destruction

CCGView::CCGView()
{
	// TODO: add construction code here

}

CCGView::~CCGView()
{
}

BOOL CCGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCGView drawing

void CCGView::OnDraw(CDC* pDC)
{
	CCGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	ddaLine(pDC,100,100,200,200,RGB(255,0,0));
}

/////////////////////////////////////////////////////////////////////////////
// CCGView printing

BOOL CCGView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCGView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCGView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCGView diagnostics

#ifdef _DEBUG
void CCGView::AssertValid() const
{
	CView::AssertValid();
}

void CCGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCGDoc* CCGView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCGDoc)));
	return (CCGDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCGView message handlers

void CCGView::ddaLine(CDC *pDC, int x0, int y0, int x1, int y1, COLORREF color)
{
	float x,y,dx,dy;
	int i,length;

	length = abs(x0 - x1);
	if(length < abs(y0 - y1))
		length = abs(y0 - y1);
	dx = (float)length / abs(x0 - x1);
	dy = (float)length / abs(y0 - y1);
	x = (float)x0;
	y = (float)y0;

	for(i=1;i<length;i++)
	{
		pDC->SetPixel(x,y,color);
		x = x + dx;
		y = y + dy;
	}

}
