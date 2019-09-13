#include "CDonne.h"
#include "CJoueur.h"

CDonne::CDonne(CJoueur *leDonneur)
{
	this->leDonneur = leDonneur;
}

void CDonne::SetPreneur(CJoueur * Preneur)
{
	lePreneur = Preneur;
}

void CDonne::SetDefenseur(CJoueur * Defenseurs[])
{
	for (int i = 0; i < 3; i++)
	{
		lesDefenseurs[i] = Defenseurs[i];
	}
}

void CDonne::SetContrat(Contrat Contrats)
{
	typeContrat = Contrats;
}

void CDonne::CalculPoints()
{
	int Bouts[4] = { 56,51,41,36 };
	int Resultat;
	Resultat = nbPoints - Bouts[nbBouts];
	if (Resultat >= 0)
	{
	//Le contrat est gagn� 
		points = 25 + Resultat;
	}
	else
	{
//Le contrat est perdu
		points = -25 + Resultat;
	}
	lePreneur->majScore(3 * points);
	for (int i = 0; i < 3; i++)
	{
		lesDefenseurs[i]->majScore(-points);
	}
	

}

void CDonne::setNBPoint(int nombre)
{
	nbPoints = nombre;
}

CDonne::~CDonne()
{

}
