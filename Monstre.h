#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre{
    
    private:
        std::string _nomMonstre;
        int pointsVie = 12;
        int pointsAttaque = 5;
        bool peutAttaquer = false;
    
    public:
        Monstre(std::string nM, int pDV, int pA, bool pAT);
        std::string getNomMonstre();
        void afficheMonstre();
        void monstreAttaque();    

};

#endif