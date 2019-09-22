// ComptagedePointetdeBOUTS.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ComptagedePointetdeBOUTS.h"
#include "afxdialogex.h"
#include "resultat.h"


// Boîte de dialogue ComptagedePointetdeBOUTS

IMPLEMENT_DYNAMIC(ComptagedePointetdeBOUTS, CDialogEx)

ComptagedePointetdeBOUTS::ComptagedePointetdeBOUTS(CJoueur *Jouer[], CPartie * Lapartie, CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_COMPTAGEDEPOINTETDEBOUTS, pParent)
	, NBPoints(0)
	, NBBouts(0)
{
	laPartie = Lapartie;
	for (int i = 0; i < 4; i++)
	{
		lesJoueurs[i] = Jouer[i];
	}
}

ComptagedePointetdeBOUTS::~ComptagedePointetdeBOUTS()
{
}

void ComptagedePointetdeBOUTS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, NBPoints);
	DDX_Text(pDX, IDC_EDIT2, NBBouts);
}


BEGIN_MESSAGE_MAP(ComptagedePointetdeBOUTS, CDialogEx)
	ON_BN_CLICKED(IDOK, &ComptagedePointetdeBOUTS::OnBnClickedOk)
END_MESSAGE_MAP()


// Gestionnaires de messages de ComptagedePointetdeBOUTS


void ComptagedePointetdeBOUTS::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnOK();
	UpdateData(true);
	laPartie->SetNombrePoint(NBPoints);
	laPartie->SetBouts(NBBouts);
	resultat resu(lesJoueurs,laPartie,this);
	resu.DoModal();
}
