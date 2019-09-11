#pragma once
#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
//#using <System.dll>

enum Poignee { Sans, Simple, Double, Triple };

enum Camp { preneur, personne, defenseur };

enum Contrat { passe, prise, garde, gardesans, gardecontre };

enum Chelem { sans, reussi, perdu, sansAnnonce };

class CDonne
{
public:
	CDonne(CJoueur *leDonneur);
	void SetPreneur(CJoueur * Preneur);
	void SetDefenseur(CJoueur * Defenseurs[]);
	~CDonne();

private:
	Contrat typeContrat;
	int nbPoints;
	int nbBouts;
	int points;
	Camp campPoignee;
	Poignee typePoygnee;
	Camp campPetitAuBout;
	Chelem typeChelem;
	CJoueur *leDonneur;
	CJoueur *lePreneur;
	CJoueur *lesDefenseurs[3];
};