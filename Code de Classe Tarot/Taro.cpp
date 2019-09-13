#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
//#using <System.dll>

int main()
{
	IHM test;
	test.SaisirJoueurs();
	test.CreerPartie();
	test.CreerDonnes(2);
	test.SaisirLePreneur();
	test.SaisirContrat();
	
	return 0;
}