#pragma once


// Bo�te de dialogue SaisieDeJoueur

class SaisieDeJoueur : public CDialogEx
{
	DECLARE_DYNAMIC(SaisieDeJoueur)

public:
	SaisieDeJoueur(CWnd* pParent = NULL);   // constructeur standard
	virtual ~SaisieDeJoueur();

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SAISIEDEJOUEUR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
};
