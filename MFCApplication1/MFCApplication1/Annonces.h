#pragma once
#include "CPartie.h"
#include "CJoueur.h"
#include "afxwin.h"

// Boîte de dialogue Annonces

class Annonces : public CDialogEx
{
	DECLARE_DYNAMIC(Annonces)

public:
	Annonces(CPartie *, CWnd* pParent = NULL);   // constructeur standard
	virtual ~Annonces();
	afx_msg void OnBnClickedOk();
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox typePoignee;

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ANNONCES };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()

private:
	CPartie *laPartie;

};

