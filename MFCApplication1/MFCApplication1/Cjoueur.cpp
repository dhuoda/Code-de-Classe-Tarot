#include "stdafx.h"
#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
//#using <System.dll>

CJoueur::CJoueur(std::string A, int B)
{
	nom = A ;
	score = B ;
}
std::string CJoueur::lireNom()
{
	return(nom);

}

int CJoueur::lireScore()
{
	return(score);
}

int CJoueur::majScore(int points)
{
	score = score + points;
	return(score);
}

int CJoueur::majDonneur()
{
	leDonneur = leDonneur + 1;
	if (leDonneur == 4)
	{
		leDonneur = 0;
	}
	return (leDonneur);
}
