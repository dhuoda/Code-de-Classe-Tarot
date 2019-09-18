// Annonces.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Annonces.h"
#include "afxdialogex.h"


// Boîte de dialogue Annonces

IMPLEMENT_DYNAMIC(Annonces, CDialogEx)

Annonces::Annonces(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ANNONCES, pParent)
{

}

Annonces::~Annonces()
{
}

void Annonces::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Annonces, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de Annonces
