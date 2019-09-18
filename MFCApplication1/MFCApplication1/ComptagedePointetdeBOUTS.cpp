// ComptagedePointetdeBOUTS.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ComptagedePointetdeBOUTS.h"
#include "afxdialogex.h"


// Boîte de dialogue ComptagedePointetdeBOUTS

IMPLEMENT_DYNAMIC(ComptagedePointetdeBOUTS, CDialogEx)

ComptagedePointetdeBOUTS::ComptagedePointetdeBOUTS(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_COMPTAGEDEPOINTETDEBOUTS, pParent)
	, NombrePointPreneur(_T(""))
	, NombreBouts(_T(""))
{

}

ComptagedePointetdeBOUTS::~ComptagedePointetdeBOUTS()
{
}

void ComptagedePointetdeBOUTS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, NombrePointPreneur);
	DDX_Text(pDX, IDC_EDIT2, NombreBouts);
}


BEGIN_MESSAGE_MAP(ComptagedePointetdeBOUTS, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de ComptagedePointetdeBOUTS
