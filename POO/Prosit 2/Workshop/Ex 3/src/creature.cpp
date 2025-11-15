#include "creature.hpp"
#include <iostream>
using namespace std;

int Creature::count = 0;

Creature::Creature(int pv,int pa, int level) {
    if (pa <= 0 || pv <= 0 || level <= 0){
        cout << "les attributs d'une creature ne peuvent êtres inferieur ou egal a 0" << endl;
        return;
    }
    this->pv = pv;
    this->pa = pa;
    this->level = level;
    this->count += 1;
} 
Creature::~Creature(){
    this->count -= 1;
}
void Creature::print() const{
    cout << "point de vie : " << this->pv << endl;
    cout << "point d'attaque : " << this->pa << endl;
    cout << "niveau : " << this->level << endl;
}
int Creature::attack() const{
    return this->pa;
}
void Creature::takeDamage(int pa){
    if(this->pv <= 0) return;
    this->pv -= pa;
}
bool Creature::alive(){
    return this->pv > 0;
} 