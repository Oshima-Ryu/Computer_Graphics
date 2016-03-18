// CGView.cpp : implementation of the CCGView class
//

#include "stdafx.h"
#include "CG.h"

#include "CGDoc.h"
#include "CGView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#define BORDER RGB(0,0,0)
#define FILLCOLOR RGB(255,0,0)
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCGView

IMPLEMENT_DYNCREATE(CCGView, CView)

BEGIN_MESSAGE_MAP(CCGView, CView)
	//{{AFX_MSG_MAP(CCGView)
	ON_WM_LBUTTONDOWN()
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

	//ddaLine(pDC,100,100,200,200,BORDOR);
	pDC->MoveTo(100,100);
	pDC->LineTo(100,200);
	pDC->LineTo(200,200);
	pDC->LineTo(200,100);
	pDC->LineTo(100,100);

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
		pDC->SetPixel((int)x,(int)y,color);
		x = x + dx;
		y = y + dy;
	}

}

void CCGView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CDC *pDC = GetDC();
	//pDC->TextOut(point.x,point.y,"HHHHH");
	FloodFill4(pDC,point.x,point.y,BORDER,FILLCOLOR);
	
	
	
	
	CView::OnLButtonDown(nFlags, point);
}

void CCGView::FloodFill4(CDC *pDC,int x, int y, COLORREF bordercolor, COLORREF newcolor)
{
	
	COLORREF color = pDC->GetPixel(x,y);
	if(color != newcolor && color != bordercolor)
	{
		pDC->SetPixel(x,y,newcolor);
		FloodFill4(pDC,x-1,y,BORDER,FILLCOLOR);
		FloodFill4(pDC,x+1,y,BORDER,FILLCOLOR);
		FloodFill4(pDC,x,y-1,BORDER,FILLCOLOR);
		FloodFill4(pDC,x,y+1,BORDER,FILLCOLOR);

	}

}
