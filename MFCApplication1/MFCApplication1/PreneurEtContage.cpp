// PreneurEtContage.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "PreneurEtContage.h"
#include "afxdialogex.h"


// Bo�te de dialogue PreneurEtContage

IMPLEMENT_DYNAMIC(PreneurEtContage, CDialogEx)

PreneurEtContage::PreneurEtContage(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_PRENEURETCONTAGE, pParent)
{

}

PreneurEtContage::~PreneurEtContage()
{
}

void PreneurEtContage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PreneurEtContage, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de PreneurEtContage
