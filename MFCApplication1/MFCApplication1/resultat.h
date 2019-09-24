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
	afx_msg void OnBnClickedOk();
	CString NJ1;
	int SJ1;
	CString NJ2;
	int SJ2;
	CString NJ3;
	int SJ3;
	CString NJ4;
	int SJ4;

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RESULTAT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()

private:
	CJoueur *lesJoueurs[4];
	CPartie *laPartie;
};
