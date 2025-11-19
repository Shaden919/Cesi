#include "objet.hpp"

#if !defined(DEF_RECTANGLE)
#define DEF_RECTANGLE

class Rectangle : public Objet
{
private:
    double largeur,longueur;
public:
    Rectangle(double largeur, double longueur);
    double getLargeur() const;
    double getLongueur() const;
    void setLargeur(double largeur);
    void setlongueur(double Longueur);
    double air() const override;
    double perimeter() const override;
    void afficheInfo() const override;
};


#endif // DEF_RECTANGLE
