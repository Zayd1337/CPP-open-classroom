#include "Personnage.hpp" //Ne pas oublier
#include <string>
#include <iostream>

using namespace std;

// objet.methode() sur cette objet j'appelle cette methode
//maChaine.size() longueur de la chaine

int main()
{
    Personnage goliath("Epee aiguisee", 20);
    Personnage david(goliath);

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
    return 0;
}