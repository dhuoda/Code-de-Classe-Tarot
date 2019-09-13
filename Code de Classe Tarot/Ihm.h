#pragma once

#include "CJoueur.h"
#include "CPartie.h"
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
	void CreerDonnes(int numDonneur);
	void SaisirLePreneur();//Fonction de Saisie du Preneur
	void SaisirContrat();//Fonction de Saisie du Contrat
	void LaPoignee();
	void ContageDePoint();//Fonction de Calcul de Point
	void SaisirPoint();//Fonction  de Saisie de Point
	void SaisirBouts();//Fonction de Saisie de Bouts
};