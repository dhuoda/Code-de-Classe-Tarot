// resultat.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "resultat.h"
#include "afxdialogex.h"


// Boîte de dialogue resultat

IMPLEMENT_DYNAMIC(resultat, CDialogEx)

resultat::resultat(CJoueur *Jouer[], CPartie * Lapartie, CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RESULTAT, pParent)
	, NJ1(_T(""))
	, SJ1(0)
	, NJ2(_T(""))
	, NJ3(_T(""))
	, NJ4(_T(""))
	, SJ2(0)
	, SJ3(0)
	, SJ4(0)
{
	laPartie = Lapartie;
	for (int i = 0; i < 4; i++)
	{
		lesJoueurs[i] = Jouer[i];
	}
	NJ1 = lesJoueurs[0]->lireNom().c_str();
	SJ1 = lesJoueurs[0]->lireScore();
	NJ2 = lesJoueurs[1]->lireNom().c_str();
	SJ2 = lesJoueurs[1]->lireScore();
	NJ3 = lesJoueurs[2]->lireNom().c_str();
	SJ3 = lesJoueurs[2]->lireScore();
	NJ4 = lesJoueurs[3]->lireNom().c_str();
	SJ4 = lesJoueurs[3]->lireScore();
}

resultat::~resultat()
{
}

void resultat::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_1_Nom, NJ1);
	DDX_Text(pDX, IDC_1_Score, SJ1);
	DDX_Text(pDX, IDC_2_Nom, NJ2);
	DDX_Text(pDX, IDC_3_Nom, NJ3);
	DDX_Text(pDX, IDC_4_Nom, NJ4);
	DDX_Text(pDX, IDC_2_Score, SJ2);
	DDX_Text(pDX, IDC_3_Score, SJ3);
	DDX_Text(pDX, IDC_4_Score, SJ4);
}


BEGIN_MESSAGE_MAP(resultat, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de resultat
void resultat::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	UpdateData(true);
	CDialogEx::OnOK();
	UpdateData(false);

}