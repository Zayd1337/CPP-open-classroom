#include "Equipement.hpp"

using namespace std;

Equipement::Equipement()
{
    m_nom = "Aucun";
    m_degats = 0;
}

Equipement::Equipement(std::string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

Equipement::~Equipement()
{
}

void Equipement::changer(std::string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

void Equipement::afficher() const
{
    std::cout << m_nom << " (Degats : " << m_degats << " )" << std::endl;
}

int Equipement::getDegats() const
{
    return m_degats;
}