#include <iostream>

using namespace std;

class Creature {
public:
 Creature() {} // Constructeur par défaut sans paramètre
 Creature(const Creature &c) {
 // Constructeur par copie
 cout << "A creature has been duplicated" << endl;
 }
 ~Creature() {
 // Destructeur
 cout << "A Creature has been destroyed" << endl;
 }
};



Creature foo(Creature &c) {
 cout << "foo" << endl;
 Creature local = c;
 return c;
}



int main(int argc, char const *argv[])
{
 Creature ogre;
 cout << "before foo" << endl;
 Creature shrek = foo(ogre);
 cout << "after foo" << endl;
 return 0;
}