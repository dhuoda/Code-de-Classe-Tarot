// Annonces.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Annonces.h"
#include "afxdialogex.h"
#include "ComptagedePointetdeBOUTS.h"



// Bo�te de dialogue Annonces

IMPLEMENT_DYNAMIC(Annonces, CDialogEx)

Annonces::Annonces(CJoueur *Jouer[], CPartie * Lapartie, CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ANNONCES, pParent)
{
	laPartie = Lapartie;
	for (int i = 0; i < 4; i++)
	{
		lesJoueurs[i] = Jouer[i];
	}
}

Annonces::~Annonces()
{
}

void Annonces::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, typePoignee);
}


BEGIN_MESSAGE_MAP(Annonces, CDialogEx)
	ON_BN_CLICKED(IDOK, &Annonces::OnBnClickedOk)
END_MESSAGE_MAP()


// Gestionnaires de messages de Annonces


void Annonces::OnBnClickedOk()
{
	CDialogEx::OnOK();
	UpdateData(true);
	laPartie->SetPoignee((Poignee)typePoignee.GetCurSel());
	ComptagedePointetdeBOUTS CPB(lesJoueurs, laPartie, this);
	CPB.DoModal();
}


void Annonces::OnCbnSelchangeCombo1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}

