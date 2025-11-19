#include "../include/rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(Point* origine,Vector longueur,Vector largeur) {
    this->origine = origine;
    this->longueur = longueur;
    this->largeur = largeur;
}
Rectangle::~Rectangle() {}
double Rectangle::aire() const {
    return longueur.norm() * largeur.norm();
}
double Rectangle::perimeter() const {
    return 2 * longueur.norm() + 2 * largeur.norm();
}
void Rectangle::afficheInfo() const {
    Point p1 = origine->add(longueur);
    Point p2 = origine->add(largeur);
    Point p3 = (origine->add(largeur)).add(longueur);
    cout << "je suis un rectangle de longueur : " << longueur.norm() << " et de largeur : " << largeur.norm() << "\n";
    cout << " mes sommets sont {" << origine->getX() << "," << origine->getY() << "} {" << p1.getX() << "," << p1.getY() << "} {" << p2.getX() << "," << p2.getY() <<"} {" << p3.getX() << "," << p3.getY() << "}\n";
}