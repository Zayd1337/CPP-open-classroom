#include "Personnage.hpp" //Ne pas oublier
#include "Duree.hpp"
#include <string>
#include <iostream>

using namespace std;

// objet.methode() sur cette objet j'appelle cette methode
//maChaine.size() longueur de la chaine

int main()
{
    Duree resultat, duree1(0, 14, 28), duree2(0, 15, 28);

    resultat = duree1 + duree2;
    
    duree1.afficher();
    cout << " et " << endl;

    duree2.afficher();
    cout << " donne " << endl;

    resultat.afficher();
    
    return 0;
}

/*int main()
{
    Personnage goliath("Epee aiguisee", 20,"goliath");
    Personnage david("Epee aiguisee", 20,"david");
    string nom ;
    string technique;

    cin >> nom;
    Personnage zayd()"Epee aiguisee", 20);
    zayd.entrerNom("Zayd");

    goliath.attaquer(david);
    cout << "goliath a attaque david !" << endl;
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    cout << "goliath a attaque david !" << endl;
    david.attaquer(goliath);
    cout << "david a attaque goliath !" << endl;
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    cout << "goliath a ramasse la hache veneneuse de la mort !" << endl;
    goliath.attaquer(david);
    cout << "goliath a attaque david !" << endl;
    cout << "david a invoque Le dieu Zayd !" << endl;
    cout << "Zayd a invoque l'epee de dieu !" << endl;
    zayd.changerArme("God's sword",1000);
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
    zayd.attaquer(goliath);
    goliath.afficherEtat();
    cout << "goliath est mort !!!!" << endl;
    cout << "Zayd a perdu le control il court vers david pour l'attaquer" << endl;
    cout << "David fait des signes de mains pour faire une technique secrete !" << endl << "choisis la technique secrete !" << "1.katon" << endl << "2.suton" << endl << "3.futon" << endl;
    cin >> technique ;
    if (technique == "1")
    {
        david.changerMagie("Katon", 25);
        cout << "David a choisi Katon !" << endl;
    }
    else if (technique == "2")
    {
        david.changerMagie("Suton", 30);
        cout << "David a choisi Suton !" << endl;
    }
    else if (technique == "3")
    {
        david.changerMagie("Futon", 35);
        cout << "David a choisi Futon !" << endl;
    }
    else
    {
        cout << "Technique invalide ! alors il va utiliser du taijutsu avec du chakra" << endl;
        david.changerMagie("taijutsu", 25);
    }
    david.attaquer(zayd);
    cout << "David a attaqué Zayd avec sa technique !" << endl;

    
    return 0;
}
    */