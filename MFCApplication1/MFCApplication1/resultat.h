#pragma once


// Bo�te de dialogue resultat

class resultat : public CDialogEx
{
	DECLARE_DYNAMIC(resultat)

public:
	resultat(CWnd* pParent = NULL);   // constructeur standard
	virtual ~resultat();

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RESULTAT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
};
