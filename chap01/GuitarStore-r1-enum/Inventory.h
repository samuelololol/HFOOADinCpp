#pragma once
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
                GBuilder builder, string model, 
                GType type, GWood backWood, GWood topWood);
    const Guitar getGuitar(const string& serialNumber) const;
    const Guitar search(const Guitar& searchGuitar) const;
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
