#pragma once
#include "CJoueur.h"
#include "CPartie.h"


// Boîte de dialogue resultat

class resultat : public CDialogEx
{
	DECLARE_DYNAMIC(resultat)

public:
	resultat(CJoueur *[], CPartie *, CWnd* pParent = NULL);   // constructeur standard
	virtual ~resultat();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RESULTAT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
private:
	CJoueur *lesJoueurs[4];
	CPartie *laPartie;
};
