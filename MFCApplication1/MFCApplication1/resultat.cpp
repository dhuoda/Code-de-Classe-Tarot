// resultat.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "resultat.h"
#include "afxdialogex.h"


// Bo�te de dialogue resultat

IMPLEMENT_DYNAMIC(resultat, CDialogEx)

resultat::resultat(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RESULTAT, pParent)
{

}

resultat::~resultat()
{
}

void resultat::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(resultat, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de resultat
