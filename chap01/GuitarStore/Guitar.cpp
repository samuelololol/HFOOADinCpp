#include "Guitar.h"
Guitar::Guitar(){}  
Guitar::Guitar(string serialNumber, double price, 
        string builder, string model, string type,
        string backWood, string topWood){

    serialNumber_ = serialNumber;
    price_ = price;
    builder_ = builder;
    model_ = model;
    type_ = type;
    backWood_ = backWood;
    topWood_ = topWood;
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
const string Guitar::getBuilder() const{
    return builder_;
}
const string Guitar::getModel() const{
    return model_;
}
const string Guitar::getType() const{
    return type_;
}
const string Guitar::getBackWood() const{
    return backWood_;
}
const string Guitar::getTopWood() const{
    return topWood_;
}
