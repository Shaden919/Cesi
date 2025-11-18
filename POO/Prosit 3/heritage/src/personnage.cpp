#include "personnage.hpp"

using namespace std;
void Personnage::recevoirDegats(int degats){  
    m_vie -= degats;
}

void Personnage::coupDePoing(Personnage &cible) const{  
    cible.recevoirDegats(10);
}

void Personnage::sePresenter() const{  
    cout << "Bonjour, je m’appelle " << m_nom << "." << endl;
      cout << "J’ai encore " << m_vie << " points de vie." << endl;
}