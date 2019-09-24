// PreneurEtContage.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "PreneurEtContage.h"
#include "afxdialogex.h"
#include "Annonces.h"


// Bo�te de dialogue PreneurEtContage

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
	DDX_Control(pDX, IDC_COMBO1, m_CB_Contrat);
}


BEGIN_MESSAGE_MAP(PreneurEtContage, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &PreneurEtContage::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &PreneurEtContage::OnBnClickedOk)
	ON_CBN_SELCHANGE(IDC_COMBO1, &PreneurEtContage::OnCbnSelchangeCombo1)
	ON_STN_CLICKED(IDC_ST_Donneur, &PreneurEtContage::OnStnClickedStDonneur)
END_MESSAGE_MAP()


// Gestionnaires de messages de PreneurEtContage


void PreneurEtContage::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void PreneurEtContage::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	CDialogEx::OnOK();
	UpdateData(true);
	laPartie->SetPreneur(lesJoueurs[NumPreneur]);
	//GetCursel() sert a recuperer l'index de la selection 
	laPartie->SetContrat((Contrat)m_CB_Contrat.GetCurSel());
	Annonces annonce(lesJoueurs, laPartie, this);
	annonce.DoModal();
}


void PreneurEtContage::OnCbnSelchangeCombo1()
{

}


void PreneurEtContage::OnStnClickedStDonneur()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}
