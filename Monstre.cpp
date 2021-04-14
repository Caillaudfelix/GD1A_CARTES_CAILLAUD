#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <string>
#include <iostream>

    Monstre::Monstre(std::string nM, int pDV, int pA, bool pAT) : _nomMonstre(nM), pointsVie(pDV), pointsAttaque(pA), peutAttaquer(pAT){

    }

    void Monstre::afficheMonstre(){
        std::cout << "Nom :" << _nomMonstre << std::endl;
        if (pointsVie <= 0){
            std::cout << _nomMonstre << "est détruit." << std::endl;
            delete Monstre;
        }
        else
        {
        std::cout << "Points de vie :" << pointsVie << std::endl;
        std::cout << "Points d'attaque :" << pointsAttaque << std::endl;    
        }
        if (peutAttaquer == false){
            std::cout << "Ce monstre ne peut plus attaquer !" << std::endl;
        }
        else
        {
            std::cout << "Ce monstre peut attaquer." << std::endl;
        }
    }

    int Monstre::monstreAttaque(int attaqueEnnemi){
        _pointsVie = _pointsVie - attaqueEnnemi;
        return _pointsVie;
    }

#endif