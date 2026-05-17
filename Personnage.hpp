//le Header qui contiendra les attributs et les prototypes de la classe
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include "Arme.hpp"

#include <string>

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    // Personnage(Personnage const& autre);
    void afficherEtat () const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void attaquerMana(Personnage &cible);
    void entrerNom(std::string nom);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    ~Personnage();

    private:

    int m_vie; // commencer le nom des attributs par m_
    int m_mana;
    std::string m_manatechnique;
    std::string m_nom;
    Arme m_arme;

}; // n'oubliez pas le point--virgule a la fin !

/*
class MaClasse
{
    public:
    void maMethode(int parametre) const;



    private:
}
*/
#endif