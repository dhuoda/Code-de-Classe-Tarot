#pragma once
#include "CJoueur.h"
#include "CDonne.h"
class CPartie
{
private:
	int NBDonnes;
	CJoueur * lesJoueurs[4];//agrégation des joueur de la Partie
	CDonne ** lesDonnes;//Composition des Donnes de la Partie
public:
	CPartie(CJoueur*[]);
	void CreerDonnes(CJoueur *);
	void SetPreneur(CJoueur *);
};