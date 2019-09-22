#pragma once
#include "CJoueur.h"
#include "CPartie.h"
#include "afxwin.h"


// Boîte de dialogue ComptagedePointetdeBOUTS

class ComptagedePointetdeBOUTS : public CDialogEx
{
	DECLARE_DYNAMIC(ComptagedePointetdeBOUTS)

public:
	ComptagedePointetdeBOUTS(CJoueur *[], CPartie *, CWnd* pParent = NULL);   // constructeur standard
	virtual ~ComptagedePointetdeBOUTS();
	CString NombrePointPreneur;
	CString NombreBouts;
	afx_msg void OnBnClickedOk();
	CEdit NBBouts;
	CEdit NBPoints;

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMPTAGEDEPOINTETDEBOUTS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()

private:
	CJoueur *lesJoueurs[4];
	CPartie *laPartie;
	
};
