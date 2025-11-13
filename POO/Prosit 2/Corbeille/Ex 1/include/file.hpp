#include <string>

using namespace std;

#if !defined(DEF_FILE)
#define DEF_FILE

class File
{
private:
    std::string name;
    std::string path;
public:
    File(const std::string& name,const std::string& path);
    ~File();
    void setName(string name);
    void setPath(string path);
    string getName();
    string getPath();
    std::string read() const;
    void write(string ligne) const;
};


#endif // DEF_FILE
