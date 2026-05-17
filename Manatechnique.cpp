#include "Manatechnique.hpp"

using namespace std;

Manatechnique::Manatechnique() : Equipement()
{
    m_nom = "Aucune magie";
    m_degats = 0;
}

Manatechnique::Manatechnique(std::string nom, int degats) : Equipement(nom, degats)
{
}

Manatechnique::~Manatechnique()
{
}
void Manatechnique::afficherTechniques()
{
    cout << "=== TECHNIQUES DISPONIBLES ===" << endl;
    cout << "1. Katon - 25 dégâts" << endl;
    cout << "2. Suton - 30 dégâts" << endl;
    cout << "3. Futon - 35 dégâts" << endl;
}