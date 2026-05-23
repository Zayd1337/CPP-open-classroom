#include "Duree.hpp"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
    if (m_secondes >= 60)
    {
        m_minutes += 1;
        m_secondes -= 60;
    }
    if (m_minutes >= 60)
    {
        m_heures += 1;
        m_minutes -= 60;
    }

}

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
 /*   if (m_heures == b.m_heures &m_minutes == b.m_minutes && m_secondes == b.m_secondes)
        return true;
    else
        return false;
 */
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
    if (m_heures < b.m_heures)
    {
        return true;
    }
    else if(m_heures == b.m_heures && m_minutes < b.m_minutes)
    {
        return true;
    }
    else if(m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
        return true;
    else
        return false;

}


bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& b)
{
    return not (a == b);
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.estPlusPetitQue(b);
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree resultat(a);
    resultat += b;
    return resultat;
}

Duree& Duree::operator+=(Duree const& b)
{
    m_secondes += b.m_secondes;
    if (m_secondes >= 60)
    {
        m_minutes += m_secondes / 60;
        m_secondes %= 60;
    }
    m_minutes += b.m_minutes;
    if(m_minutes >= 60)
    {
        m_heures += m_minutes / 60;
        m_minutes %= 60;
    }
    m_heures += b.m_heures;
    return *this;
}


void Duree::afficher() const
{
    flux << m_heures << "h" << m_minutes << "min" << m_secondes << "s" ;
}

ostream &operator<<( ostream &flux, Duree const& duree)
{
    duree.afficher(flux);
    return flux;
}