#include "Arme.hpp"

using namespace std;

Arme::Arme() : Equipement()
{
    m_nom = "Epee rouille";
    m_degats = 10;
}

Arme::Arme(std::string nom, int degats) : Equipement(nom, degats)
{
}

Arme::~Arme()
{
}