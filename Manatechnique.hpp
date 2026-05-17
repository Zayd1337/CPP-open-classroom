#ifndef DEF_MANATECHNIQUE
#define DEF_MANATECHNIQUE

#include "Equipement.hpp"

class Manatechnique : public Equipement
{
    public:
    
    Manatechnique();
    Manatechnique(std::string nom, int degats);
    ~Manatechnique();

    static void afficherTechniques();
};

#endif