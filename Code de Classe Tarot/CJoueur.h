#pragma once
#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
//#using <System.dll>

class CJoueur
{
private:
	std::string nom;
	int score;
public:
	CJoueur(std::string,int);
	std::string ireNom();
	int ireScore();
	int majScore();
};