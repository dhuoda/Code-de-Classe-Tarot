// Annonces.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Annonces.h"
#include "afxdialogex.h"
#include "ComptagedePointetdeBOUTS.h"



// Bo�te de dialogue Annonces

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
	ON_BN_CLICKED(IDOK, &Annonces::OnBnClickedOk)
END_MESSAGE_MAP()


// Gestionnaires de messages de Annonces


void Annonces::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	CDialogEx::OnOK();
	ComptagedePointetdeBOUTS CPB(this);
	CPB.DoModal();
}
