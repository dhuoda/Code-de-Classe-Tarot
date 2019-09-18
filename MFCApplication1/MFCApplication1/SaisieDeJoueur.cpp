// SaisieDeJoueur.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "SaisieDeJoueur.h"
#include "afxdialogex.h"


// Boîte de dialogue SaisieDeJoueur

IMPLEMENT_DYNAMIC(SaisieDeJoueur, CDialogEx)

SaisieDeJoueur::SaisieDeJoueur(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SAISIEDEJOUEUR, pParent)
{

}

SaisieDeJoueur::~SaisieDeJoueur()
{
}

void SaisieDeJoueur::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SaisieDeJoueur, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de SaisieDeJoueur
