#ifndef __GUITAR_H__
#define __GUITAR_H__
#include <string>
#include "Type.h"
#include "Builder.h"
#include "Wood.h"

using namespace std;

class GuitarSpec {
    private:
        string   model_;
        GBuilder builder_;
        GType    type_;
        // new added attribute
        int      numStrings_;
        GWood    backWood_;
        GWood    topWood_;

    public:
        GuitarSpec();
        GuitarSpec(const GBuilder &builder, string model, 
                const GType &type, const int numStrings,
                const GWood &backWood, 
                const GWood &topWood);

        const GBuilder getBuilder() const;
        const string   getModel() const ;
        const GType    getType() const;
        const int      getNumStrings() const;
        const GWood    getBackWood() const;
        const GWood    getTopWood() const;
        const bool     matches(const GuitarSpec otherSpec) const;
        const bool     operator==(const GuitarSpec otherSpec) const;
};

class Guitar {
    private:
        string serialNumber_;
        double price_;
        GuitarSpec spec_;
    public:
        Guitar();
        Guitar(const string serialNumber, double price, 
               const GuitarSpec spec);
        const string getSerialNumber() const;
        const double getPrice() const;
        void setPrice(float newPrice);
        const GuitarSpec getSpec() const;
};

#endif
