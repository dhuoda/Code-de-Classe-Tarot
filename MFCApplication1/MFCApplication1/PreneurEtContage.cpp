// PreneurEtContage.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "PreneurEtContage.h"
#include "afxdialogex.h"
#include "Annonces.h"


// Boîte de dialogue PreneurEtContage

IMPLEMENT_DYNAMIC(PreneurEtContage, CDialogEx)

PreneurEtContage::PreneurEtContage(CJoueur *Jouer[],CPartie * Lapartie, CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_PRENEURETCONTAGE, pParent)
	, NumPreneur(0)
	, m_Donneur(_T(""))
{
	laPartie = Lapartie;
	for (int i = 0; i < 4; i++)
	{
		lesJoueurs[i] = Jouer[i];
	}
	laPartie->CreerDonnes(lesJoueurs[0]);
	m_Donneur = lesJoueurs[0]->lireNom().c_str();
}

PreneurEtContage::~PreneurEtContage()
{
}

void PreneurEtContage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, NumPreneur);
	DDX_Text(pDX, IDC_ST_Donneur, m_Donneur);
}


BEGIN_MESSAGE_MAP(PreneurEtContage, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &PreneurEtContage::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &PreneurEtContage::OnBnClickedOk)
	ON_BN_CLICKED(IDC_RADIO1, &PreneurEtContage::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &PreneurEtContage::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &PreneurEtContage::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &PreneurEtContage::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &PreneurEtContage::OnBnClickedRadio5)
END_MESSAGE_MAP()


// Gestionnaires de messages de PreneurEtContage


void PreneurEtContage::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void PreneurEtContage::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnOK();
	UpdateData(true);
	laPartie->SetPreneur(lesJoueurs[NumPreneur]);
	Annonces annonce(this);
	annonce.DoModal();
	CDialogEx::OnOK();

}


void PreneurEtContage::OnBnClickedRadio1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void PreneurEtContage::OnBnClickedRadio2()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void PreneurEtContage::OnBnClickedRadio3()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void PreneurEtContage::OnBnClickedRadio4()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void PreneurEtContage::OnBnClickedRadio5()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}
