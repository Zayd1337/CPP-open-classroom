#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>
#include <string>

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    
    bool estEgal(Duree const& b) const;
    bool estPlusPetitQue(Duree const& b) const;
    void operator+=(Duree const& b);
    void afficher(Duree const& resultat) const;
    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);

#endif