#if !defined(DEF_OBJET)
#define DEF_OBJET

class Objet
{
private:
public:
    virtual ~Objet() = 0;
    virtual double air() const = 0;
    virtual double perimeter() const = 0;
    virtual void afficheInfo() const = 0;
};


#endif // DEF_OBJET
