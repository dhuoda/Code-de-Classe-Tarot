#pragma once


// Bo�te de dialogue ComptagedePointetdeBOUTS

class ComptagedePointetdeBOUTS : public CDialogEx
{
	DECLARE_DYNAMIC(ComptagedePointetdeBOUTS)

public:
	ComptagedePointetdeBOUTS(CWnd* pParent = NULL);   // constructeur standard
	virtual ~ComptagedePointetdeBOUTS();

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMPTAGEDEPOINTETDEBOUTS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
};
