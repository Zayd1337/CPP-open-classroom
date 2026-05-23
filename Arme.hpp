#ifndef DEF_ARME
#define DEF_ARME

#include "Equipement.hpp"

class Arme : public Equipement
{
    public:

    Arme();
    Arme(std::string nom, int degats);
    ~Arme();

};

#endif