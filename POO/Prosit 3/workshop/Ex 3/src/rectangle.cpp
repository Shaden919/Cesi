#include "rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double largeur, double longueur) {
    if (largeur < 0) this->largeur = -largeur;
    else this->largeur = largeur;
    if (longueur < 0) this->longueur = -longueur;
    else this->longueur = longueur;
}
double Rectangle::getLargeur() const {
    return this->largeur;
}
double Rectangle::getLongueur() const {
    return this->longueur;
}
void Rectangle::setLargeur(double largeur) {
    if (largeur < 0) this->largeur = -largeur;
    else this->largeur = largeur;
}
void Rectangle::setlongueur(double Longueur) {
    if (longueur < 0) this->longueur = -longueur;
    else this->longueur = longueur;
}
double Rectangle::air() const {
    double air = 0;
    air = longueur * largeur;
    return air;
}
double Rectangle::perimeter() const {
    double peri = 0;
    peri = longueur + largeur;
    return peri;
}
void Rectangle::afficheInfo() const {
    cout << "je suis un rectangle de longueur : " << longueur << " et de largeur : " << largeur << "\n";
}
