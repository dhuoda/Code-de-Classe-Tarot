#include "CDonne.h"
#include "CJoueur.h"

CDonne::CDonne(CJoueur *leDonneur)//Constructeur de la Classe CDonne
{
	this->leDonneur = leDonneur;
}

void CDonne::SetPreneur(CJoueur * Preneur)//Methode SetPreneur de la Classe CDonne
{
	lePreneur = Preneur;
}

void CDonne::SetDefenseur(CJoueur * Defenseurs[])//Methode SetDefenseur de la Classe CDonne
{
	//Crée un tableau de Defenseurs
	for (int i = 0; i < 3; i++)
	{
		lesDefenseurs[i] = Defenseurs[i];
	}
}

void CDonne::SetContrat(Contrat Contrats)//Methode SetContrat de la Classe CDonne
{
	typeContrat = Contrats;
}

void CDonne::SetPoignee(Poignee Poignee)
{
	typePoygnee = Poignee;
}

int CDonne::CalculPoints()//Methode CalculPoint de la Classe CDonne
{
	int Bouts[4] = { 56,51,41,36 };
	int Resultat;
	Resultat = nbPoints - Bouts[nbBouts];
	if (Resultat >= 0)
	{
	//Le contrat est gagné 
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
	return points;
}

void CDonne::setNBPoint(int nombre)//Methode SetNBPoint de la Classe CDonne
{
	nbPoints = nombre;
}

void CDonne::setNBbouts(int bouts)//Methode SetNBbouts de la Classe CDonne
{
	nbBouts = bouts;
}

CDonne::~CDonne()//Destructeur de la Classe CDonne
{

}
