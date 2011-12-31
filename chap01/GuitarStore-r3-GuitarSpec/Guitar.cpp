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
                       const GWood &backWood, const GWood &topWood):
    model_(model),
    builder_(builder),
    type_(type),
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
