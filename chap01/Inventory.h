#include "Guitar.h"
#include <list>

using std::list;
using namespace std;

class Inventory {
private:
    list<Guitar *> guitars;
public:
    Inventory ();
    void addGuitar(string serialNumber, double price, 
                string builder, string model, 
                string type, string backWood, string topWood);
    const Guitar* getGuitar(const string& serialNumber) const;
    const Guitar* search(const Guitar& searchGuitar) const;
    virtual ~Inventory();
};
