#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
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

void  CPartie::CreerDonnes(CJoueur * donneur)
{
	NBDonnes++;
	lesDonnes[NBDonnes-1]=new CDonne(donneur);
}

void CPartie::SetPreneur(CJoueur * preneur,CJoueur * Defenseur)
{
	lesDonnes[NBDonnes - 1]->SetPreneur(preneur);
	for (int i = 0; i < 4; i++)
	{
		if (lesJoueurs[i] != preneur)
		{
			//enregistrer lesJoueurs[i] Dans le Tableau des Defenseurs
			Defenseur = lesJoueurs[i];
		}
	}
	// Appeler SetDefenseurs de la Donne
	lesDonnes[NBDonnes - 1]->SetDefenseur(Defenseur);
}
