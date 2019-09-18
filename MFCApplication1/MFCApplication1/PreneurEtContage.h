#pragma once


// Boîte de dialogue PreneurEtContage

class PreneurEtContage : public CDialogEx
{
	DECLARE_DYNAMIC(PreneurEtContage)

public:
	PreneurEtContage(CWnd* pParent = NULL);   // constructeur standard
	virtual ~PreneurEtContage();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PRENEURETCONTAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
};
