#include "Guitar.h"

Guitar::Guitar(){}  
Guitar::Guitar(string serialNumber, double price, 
        const GBuilder &builder, string model,const GType &type,
        const GWood &backWood, const GWood &topWood):
    serialNumber_(serialNumber),
    model_(model),
    price_(price),
    builder_(builder),
    type_(type),
    backWood_(backWood),
    topWood_(topWood)
{
    //serialNumber_ = serialNumber;
    //price_ = price;
    //builder_ = builder.toString();
    //model_ = model;
    //type_ = type.toString();
    //backWood_ = backWood.toString();
    //topWood_ = topWood.toString();
}
const string Guitar::getSerialNumber() const{
    return serialNumber_;
}

const double Guitar::getPrice() const{
    return price_;
}
void Guitar::setPrice(float newPrice){
    price_ = newPrice;
}
const GBuilder Guitar::getBuilder() const{
    return builder_;
}
const string Guitar::getModel() const{
    return model_;
}
const GType Guitar::getType() const{
    return type_;
}
const GWood Guitar::getBackWood() const{
    return backWood_;
}
const GWood Guitar::getTopWood() const{
    return topWood_;
}
