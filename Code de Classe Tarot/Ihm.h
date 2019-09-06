#pragma once
#include "CJoueur.h"
#include "CPartie.h"
class IHM
{
private:
	CJoueur *joueur[4];//codage de la composition des 4 Joueurs
	CPartie * Partie;//codage de la composition de la Partie

public:
	IHM();
	~IHM();
};