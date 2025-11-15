#include <string>
using namespace std;

#if !defined(DEF_HEROS)
#define DEF_HEROS

class Heros
{
private:
    string name;
    int pv;
    int pa;
public:
    Heros(string name, int pv = 10, int pa = 2);
    ~Heros();
    void print() const;
    int attack() const;
    void takeDamage(int pa);
    bool alive() const;
};


#endif // DEF_HEROS
