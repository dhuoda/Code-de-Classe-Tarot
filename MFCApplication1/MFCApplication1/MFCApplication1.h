
// MFCApplication1.h�: fichier d'en-t�te principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CMFCApplication1App�:
// Consultez MFCApplication1.cpp pour l'impl�mentation de cette classe
//

class CMFCApplication1App : public CWinApp
{
public:
	CMFCApplication1App();

// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication1App theApp;