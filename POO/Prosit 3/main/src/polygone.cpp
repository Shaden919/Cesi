#include "polygone.hpp"

Polygone::~Polygone() {}

void Polygone::setOrigine(Point* origine) {
    this->origine = origine;
}
Point Polygone::getOrigine() const {
    return *origine;
}