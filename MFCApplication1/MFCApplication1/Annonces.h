#pragma once


// Bo�te de dialogue Annonces

class Annonces : public CDialogEx
{
	DECLARE_DYNAMIC(Annonces)

public:
	Annonces(CWnd* pParent = NULL);   // constructeur standard
	virtual ~Annonces();

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ANNONCES };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
};