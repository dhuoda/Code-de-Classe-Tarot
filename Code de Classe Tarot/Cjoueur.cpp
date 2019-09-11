#include <iostream>

#include "CJoueur.h"
CJoueur::CJoueur(std::string A, int B)
{
	nom = A ;
	score = B ;
}
std::string CJoueur::lireNom()
{
	return nom;
}

int CJoueur::lireScore()
{
	return score;
}

int CJoueur::majScore(int nbPoints)
{
	score = score + nbPoints;
}