#pragma once
#include "CJoueur.h"
#include "CDonne.h"
class CPartie
{
private:
	int NBDonnes;
	CJoueur * lesJoueurs[4]; 
	CDonne ** lesDonnes;
public:
	CPartie(CJoueur*[]);
	void CreerDonnes(CJoueur *);
	void SetPreneur(CJoueur *);
	void SetContrat(Contrat);
	void SetCalcul();
};