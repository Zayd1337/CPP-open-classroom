#ifndef DEF_EQUIPEMENT
#define DEF_EQUIPEMENT

#include <iostream>
#include <string>

class Equipement
{
    public:
    
    Equipement();
    Equipement(std::string nom, int degats);
    virtual ~Equipement();
    
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;

    protected:
    
    std::string m_nom;
    int m_degats;

};

#endif