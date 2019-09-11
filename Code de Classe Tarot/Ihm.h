#pragma once

#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>

//#using <System.dll>


class IHM
{
private:
	CJoueur *lesJoueurs[4];//codage de la composition des 4 Joueurs
	CPartie * laPartie;//codage de la composition de la Partie

public:
	IHM();
	~IHM();
	void SaisirJoueurs();//Fonction de saisie des Joueurs
	void CreerPartie();//Fonction de creation de la Partie
	void SaisirLePreneur();//Fonction de Saisie du Preneur
};