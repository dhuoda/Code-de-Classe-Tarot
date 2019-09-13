#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>

CPartie::CPartie(CJoueur * Nom[])
{
	for(int i = 0; i<4 ; i++)
		lesJoueurs[i] = Nom[i];
	lesDonnes = new CDonne *[100];
	NBDonnes = 0;
}


CPartie::~CPartie()
{
	delete lesDonnes;
}

void  CPartie::CreerDonnes(CJoueur * donneur)
{
	NBDonnes++;
	lesDonnes[NBDonnes-1]=new CDonne(donneur);
}

void CPartie::SetPreneur(CJoueur * preneur)
{
	CJoueur * Defenseur[3];
	int IDdef = 0;
	lesDonnes[NBDonnes - 1]->SetPreneur(preneur);
	for (int i = 0; i < 4; i++)
	{
		if (lesJoueurs[i] != preneur)
		{
			//enregistrer lesJoueurs[i] Dans le Tableau des Defenseurs
			Defenseur[IDdef] = lesJoueurs[i];
			IDdef++;
		}
	}
	// Appeler SetDefenseurs de la Donne
	lesDonnes[NBDonnes - 1]->SetDefenseur(Defenseur);
}

void CPartie::SetContrat(Contrat Contrats)
{
	lesDonnes[NBDonnes - 1]->SetContrat(Contrats);
}

void CPartie::SetCalcul()
{
	lesDonnes[NBDonnes - 1]->CalculPoints();
}
