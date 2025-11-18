#ifndef DEF_GUERRIER
#define DEF_GUERRIER
#include <iostream>
#include <string>

#include "personnage.hpp"//Ne pas oublier d’inclure Personnage.hpp pour pouvoir en hériter
class Guerrier : public Personnage//Signifie  : créer une classe Guerrier qui hérite de la classe Personnage
{
    public:    
        void frapperCommeUnSourdAvecUnMarteau() const;
        void sePresenter() const{
              Personnage::sePresenter();
              std::cout << "Je suis un guerrier redoutable." << std::endl;}
        void presenterArme() override; // overide ne fonctionne que sur les méthodes virtual
};

#endif