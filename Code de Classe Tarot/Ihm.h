#pragma once
#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
//#using <System.dll>


class IHM
{
private:
	CJoueur *joueur[4];//codage de la composition des 4 Joueurs
	CPartie * Partie;//codage de la composition de la Partie

public:
	IHM();
	~IHM();
};