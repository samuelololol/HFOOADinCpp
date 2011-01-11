#ifndef __GUITAR_H__
#define __GUITAR_H__
#include <string>
#include "Type.h"
#include "Builder.h"
#include "Wood.h"

using namespace std;

class Guitar {
    private:
        string serialNumber_, builder_, model_, type_, backWood_, topWood_;
        double price_;
    public:
        Guitar();
        Guitar(string serialNumber, double price, 
                GBuilder builder, string model,GType type,
                GWood backWood, GWood topWood);
        const string getSerialNumber() const;
        const double getPrice() const;
        void setPrice(float newPrice);
        const string getBuilder() const;
        const string getModel() const ;
        const string getType() const;
        const string getBackWood() const;
        const string getTopWood() const;
};
#endif
