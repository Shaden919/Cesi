#include "carre.hpp"
#include "rectangle.hpp"
#include <iostream>
using namespace std;

int main() {
    Carre carre(5);
    Rectangle rectangle(5,10);
    carre.afficheInfo();
    cout << carre.air() << endl;
    cout << carre.perimeter() << endl;
    rectangle.afficheInfo();
    cout << rectangle.air() << endl;
    cout << rectangle.perimeter() << endl;
    return 0;
}