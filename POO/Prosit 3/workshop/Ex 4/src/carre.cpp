#include "carre.hpp"
#include <iostream>
using namespace std;

Carre::Carre(double cote) {
    if (cote < 0) {this->cote = - cote;return;}
    this->cote = cote;
}
double Carre::getCote() const {
    return this->cote;
}
void Carre::setCote(double cote) {
    if (cote < 0) {this->cote = - cote;return;}
    this->cote = cote;
}
double Carre::air() const {
    double air = 0;
    air = cote * cote;
    return air;
}
double Carre::perimeter() const {
    double peri = 0;
    peri = cote + cote;
    return peri;
}
void Carre::afficheInfo() const {
    cout << "je suis un carré de cotes : " << cote << "\n";
}