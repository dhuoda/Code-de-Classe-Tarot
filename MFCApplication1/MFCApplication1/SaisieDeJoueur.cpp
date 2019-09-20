// SaisieDeJoueur.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "SaisieDeJoueur.h"
#include "afxdialogex.h"


// Bo�te de dialogue SaisieDeJoueur

IMPLEMENT_DYNAMIC(SaisieDeJoueur, CDialogEx)

SaisieDeJoueur::SaisieDeJoueur(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SAISIEDEJOUEUR, pParent)
	, NomJoueur1(_T(""))
	, NomJoueur2(_T(""))
	, NomJoueur3(_T(""))
	, NomJoueur4(_T(""))
{

}

SaisieDeJoueur::~SaisieDeJoueur()
{
}

void SaisieDeJoueur::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, NomJoueur1);
	DDX_Text(pDX, IDC_EDIT2, NomJoueur2);
	DDX_Text(pDX, IDC_EDIT4, NomJoueur3);
	DDX_Text(pDX, IDC_EDIT3, NomJoueur4);
}


BEGIN_MESSAGE_MAP(SaisieDeJoueur, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT4, &SaisieDeJoueur::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT1, &SaisieDeJoueur::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &SaisieDeJoueur::OnBnClickedOk)
END_MESSAGE_MAP()


// Gestionnaires de messages de SaisieDeJoueur


void SaisieDeJoueur::OnEnChangeEdit4()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void SaisieDeJoueur::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void SaisieDeJoueur::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	//CDialogEx::OnOK();
	UpdateData(true);
	std::string j1 = (CStringA)NomJoueur1.GetBuffer();
	std::string j2 = (CStringA)NomJoueur2.GetBuffer();
	std::string j3 = (CStringA)NomJoueur3.GetBuffer();
	std::string j4 = (CStringA)NomJoueur4.GetBuffer();

	lesJoueurs[0] = new CJoueur(j1, 0);
	lesJoueurs[1] = new CJoueur(j2, 0);
	lesJoueurs[2] = new CJoueur(j3, 0);
	lesJoueurs[3] = new CJoueur(j4, 0);
	laPartie = new CPartie(lesJoueurs);
	UpdateData(false);
}


