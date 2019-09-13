#pragma once
#include "CJoueur.h"

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
	void SetContrat(Contrat Contrats);
	int CalculPoints();
	void setNBPoint(int);
	void setNBbouts(int);
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