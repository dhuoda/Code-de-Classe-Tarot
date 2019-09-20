#pragma once
#include "CJoueur.h"
#include "CPartie.h"
#include "afxwin.h"


// Boîte de dialogue PreneurEtContage

class PreneurEtContage : public CDialogEx
{
	DECLARE_DYNAMIC(PreneurEtContage)

public:
	PreneurEtContage(CJoueur *[],CPartie *,CWnd* pParent = NULL);   // constructeur standard
	virtual ~PreneurEtContage();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PRENEURETCONTAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	int NumPreneur;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
private:
	CJoueur *lesJoueurs[4];
	CPartie *laPartie;
public:
	CString m_Donneur;
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox m_CB_Contrat;
};
