#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
//#using <System.dll>

CDonne::CDonne(CJoueur *leDonneur)
{
	this->leDonneur = leDonneur;
}

CDonne::~CDonne()
{

}
