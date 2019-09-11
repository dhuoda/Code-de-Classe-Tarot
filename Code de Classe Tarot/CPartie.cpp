#include "CJoueur.h"
#include "CPartie.h"
CPartie::CPartie(CJoueur * Nom[])
{
	for(int i = 0; i<4 ; i++)
	lesJoueur[i] = Nom[i];
	lesDonnes = new CDonne *[100];
	NBDonnes = 0;
}

void  CPartie::CreerDonnes(CJoueur * donneur)
{
	NBDonnes++;
	lesDonnes[NBDonnes-1]=new CDonne(donneur);
}