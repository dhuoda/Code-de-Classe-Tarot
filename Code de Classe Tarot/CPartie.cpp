#include "CJoueur.h"
#include "CPartie.h"
CPartie::CPartie(CJoueur * Nom[])
{
	for(int i = 0; i<4 ; i++)
	lesJoueur[i] = Nom[i];
}

void  CPartie::CreerDonnes(CJoueur *)
{

}