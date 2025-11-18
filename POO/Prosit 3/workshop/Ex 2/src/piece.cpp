#include "piece.hpp"

Piece::Piece(int nbWindows,string color = "white") {
    if (nbWindows < 0) {this->nbWindows = 0; return;}
    this->nbWindows = nbWindows;
}
void Piece::setNbWindows(int nbWindows) {}
void Piece::setColor(string color) {}
int Piece::getNbwindows() const {}
string Piece::getColor() const {}