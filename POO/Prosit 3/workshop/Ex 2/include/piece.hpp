#if !defined(DEF_PIECE)
#define DEF_PIECE

#include <string>
using namespace std;

class Piece
{
protected:
    int nbWindows;
    string color;
public:
    Piece(int nbWindows,string color = "white");
    virtual ~Piece();
    void setNbWindows(int nbWindows);
    void setColor(string color);
    int getNbwindows() const;
    string getColor() const;
};


#endif // DEF_PIECE
