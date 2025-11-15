#if !defined(DEF_CREATURE)
#define DEF_CREATURE

class Creature
{
private:
    int pv;
    int pa;
    int level;
    static int count;
public:
    Creature(int pv = 10,int pa = 2, int level = 1);
    ~Creature();
    void print() const;
    int attack() const;
    void takeDamage(int pa);
    bool alive(); 
};


#endif // DEF_CREATURE
