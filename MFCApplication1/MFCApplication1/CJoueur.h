#pragma once
#include <string>

class CJoueur
{
private:
	std::string nom;
	int score;
	int leDonneur = 0;
public:
	CJoueur(std::string,int);
	std::string lireNom();
	int lireScore();
	int majScore(int);
	int majDonneur();

};