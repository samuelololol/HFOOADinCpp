#include "Guitar.h"

Guitar::Guitar(){}  
Guitar::Guitar(const string serialNumber, 
               const double price, 
               const GuitarSpec spec):
    serialNumber_(serialNumber)
    ,price_(price)
    ,spec_(spec){}


const string Guitar::getSerialNumber() const{
    return serialNumber_;
}
const double Guitar::getPrice() const{
    return price_;
}
void Guitar::setPrice(float newPrice){
    price_ = newPrice;
}
const GuitarSpec Guitar::getSpec() const{
    return spec_;
}



GuitarSpec::GuitarSpec(){}  
GuitarSpec::GuitarSpec(const GBuilder &builder, 
                       string model,
                       const GType &type,
                       int numStrings,
                       const GWood &backWood, const GWood &topWood):
    model_(model),
    builder_(builder),
    type_(type),
    numStrings_(numStrings),
    backWood_(backWood),
    topWood_(topWood)
{}


const GBuilder GuitarSpec::getBuilder() const{
    return builder_;
}
const string GuitarSpec::getModel() const{
    return model_;
}
const GType GuitarSpec::getType() const{
    return type_;
}
const GWood GuitarSpec::getBackWood() const{
    return backWood_;
}
const GWood GuitarSpec::getTopWood() const{
    return topWood_;
}
const int GuitarSpec::getNumStrings() const{
    return numStrings_;
}

const bool GuitarSpec::matches(const GuitarSpec otherSpec) const{
    // builder
    if (!(getBuilder().toString().empty()) &&
           (getBuilder().toString() != otherSpec.getBuilder().toString()))
        return false;
    
    // model
    if (!(getModel().empty()) &&
           (getModel() != otherSpec.getModel()))
        return false;

    // type
    if (!(getType().toString().empty()) &&
           (getType().toString() != otherSpec.getType().toString()))
        return false;

    // backWood
    if (!(getBackWood().toString().empty()) &&
           (getBackWood().toString() != otherSpec.getBackWood().toString()))
        return false;
    // topWood
    if (!(getTopWood().toString().empty()) &&
           (getTopWood().toString() != otherSpec.getTopWood().toString()))
        return false;
    return true;
}
const bool GuitarSpec::operator==(const GuitarSpec otherSpec) const{
    return this->matches(otherSpec);
}
