
#include "Ihm.h"
#include <string>
using namespace std;

IHM::IHM()
{

}

IHM::~IHM()
{
}

void IHM::SaisirJoueurs()
{
	string joueur1;
	string joueur2;
	string joueur3;
	string joueur4;

	cout << "Joueur 1: \t";
	cin >> joueur1;
	cout << endl;

	cout << "Joueur 2: \t";
	cin >> joueur2;
	cout << endl;

	cout << "Joueur 3: \t";
	cin >> joueur3;
	cout << endl;

	cout << "Joueur 4: \t";
	cin >> joueur4;
	cout << endl;
	cout << endl;

	lesJoueurs[0] = new CJoueur(joueur1, 0);
	lesJoueurs[1] = new CJoueur(joueur2, 0);
	lesJoueurs[2] = new CJoueur(joueur3, 0);
	lesJoueurs[3] = new CJoueur(joueur4, 0);
}

void IHM::CreerPartie()
{
	laPartie = new CPartie(lesJoueurs);
}

void IHM::CreerDonnes(int numDonneur)
{
	laPartie->CreerDonnes(lesJoueurs[numDonneur - 1]);
}

void IHM::SaisirLePreneur()
{
	int NBPreneur;
	cout << " Saisir le Preneur: \t";
	cin >> NBPreneur;
	laPartie->SetPreneur(lesJoueurs[NBPreneur]);
}

void IHM::SaisirContrat()
{
	int nomContrat;
	cout << "\n\t 0.Passe \n\t 1.Prise \n\t 2.Garde \n\t 3.Garde Sans \n\t 4.Garde Avec \n Saisir le numéro du contrat : \t";
	cin >> nomContrat;
	laPartie->SetContrat((Contrat)nomContrat);
	
}

void IHM::LaPoignee()
{
	int ChoixP;
	cout << endl << " Choisisez La poignee:\n\t 0:Sans \n\t 1:Simple \n\t 2:Double \n\t 3.Triple \n Votre Choix:\t";
	cin >> ChoixP;
	laPartie->SetPoignee((Poignee)ChoixP);
}

void IHM::ContageDePoint()
{
	laPartie->GetCalcul();
 }

void IHM::SaisirPoint()
{
	int NombrePoint;
	cout << endl << "Saisir les points: \t";
	cin >> NombrePoint;
	laPartie->SetNombrePoint(NombrePoint);
}

void IHM::SaisirBouts()
{
	int NBBouts;
	cout << endl << "Saisir Bouts: \t";
	cin >> NBBouts;
	laPartie->SetBouts(NBBouts);
}

