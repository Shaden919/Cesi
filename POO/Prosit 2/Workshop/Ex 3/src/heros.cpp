#include "heros.hpp"
#include <iostream>
using namespace std;

Heros::Heros(string name, int pv, int pa){
    if (name == "" || pv <= 0 || pa <= 0) {
        cout << "le nom ne peut être vide, les pv et pa d'un hero ne peuvent êtres inferieur ou egale a 0" << endl;
        return;
    }
    this->name = name;
    this->pv = pv;
    this->pa = pa;
}
Heros::~Heros(){}
void Heros::print() const{
    cout << "ce hero s'appelle " << this->name << ", il a " << this->pv <<" pv et " << this->pa <<" pa." << endl;
}
int Heros::attack() const{
    return this->pa;
}
void Heros::takeDamage(int pa){
    if(this->pv <= 0) return;
    this->pv -= pa;
}
bool Heros::alive() const{
    return this->pv > 0;
}