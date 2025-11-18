#include "objet.hpp"

#if !defined(DEF_CARRE)
#define DEF_CARRE

class Carre : public Objet
{
private:
    double cote;
public:
    Carre(double cote);
    double getCote() const;
    void setCote(double cote);
    double air() const override;
    double perimeter() const override;
    void afficheInfo() const override;
};

#endif // DEF_CARRE
