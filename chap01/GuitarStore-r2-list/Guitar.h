#ifndef __GUITAR_H__
#define __GUITAR_H__
#include <string>
#include "Type.h"
#include "Builder.h"
#include "Wood.h"

using namespace std;

class Guitar {
    private:
        string serialNumber_;
        string model_;
        double price_;
        GBuilder builder_;
        GType type_;
        GWood backWood_;
        GWood topWood_;
    public:
        Guitar();
        Guitar(string serialNumber, double price, 
                const GBuilder &builder, string model, const GType &type,
                const GWood &backWood, const GWood &topWood);
        const string getSerialNumber() const;
        const double getPrice() const;
        void setPrice(float newPrice);
        const GBuilder getBuilder() const;
        const string getModel() const ;
        const GType getType() const;
        const GWood getBackWood() const;
        const GWood getTopWood() const;
};
#endif
