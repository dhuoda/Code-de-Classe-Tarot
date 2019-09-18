#pragma once
#include "CJoueur.h"
#include "CPartie.h"

// Boîte de dialogue SaisieDeJoueur

class SaisieDeJoueur : public CDialogEx
{
	DECLARE_DYNAMIC(SaisieDeJoueur)

public:
	SaisieDeJoueur(CWnd* pParent = NULL);   // constructeur standard
	virtual ~SaisieDeJoueur();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SAISIEDEJOUEUR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit1();
	CString NomJoueur1;
	CString NomJoueur2;
	CString NomJoueur3;
	CString NomJoueur4;
	afx_msg void OnBnClickedOk();
private:
	CJoueur *lesJoueurs[4];
	CPartie *laPartie;
};
