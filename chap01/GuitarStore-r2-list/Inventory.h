#ifndef __INVENTORY_H__
#define __INVENTORY_H__
#include <list>
#include "Guitar.h"
#include "exception.h"

using std::list;
using namespace std;

class Inventory {
private:
    list<Guitar> guitars;
public:
    Inventory ();
    void addGuitar(string serialNumber, double price, 
                const GBuilder &builder, string model, 
                const GType &type, const GWood &backWood, const GWood &topWood);
    const Guitar getGuitar(const string& serialNumber) const;
    const list<Guitar> search(const Guitar& searchGuitar) const;
    virtual ~Inventory();
};


class InventoryException : public myexception {
public:
    InventoryException(){
        message_ = "error made by Inventory\n";
    }
    InventoryException(const char* message){
        message_ = message;
    }
    virtual const char* message() {
        return message_;
    }
};
#endif
