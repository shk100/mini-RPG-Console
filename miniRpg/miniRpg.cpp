#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main()
{
    // Création des personnages de debut de jeu dont un avec une arme et des degats perso.
    Personnage perso1, perso2("épée longue", 15);

   // Simulation de combat des deux perso
    perso1.attaquer(perso2);
    perso2.boirePotionDeVie(20);
    perso1.attaquer(perso2);
    perso2.attaquer(perso1);
    perso1.changerArme("grande hache", 40);
    perso1.attaquer(perso2);

    // Verification de l'état de la vie des deux perso
    cout << "perso2" << endl;
    perso2.afficherEtat();
    cout << endl << "perso1" << endl;
    perso1.afficherEtat();

    return 0;
}