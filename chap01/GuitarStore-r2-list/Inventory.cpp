#include "Inventory.h"

Inventory::Inventory() {}

void Inventory:: addGuitar(string serialNumber, double price, 
        const GBuilder &builder, string model, 
        const GType &type, const GWood &backWood, const GWood &topWood)
{
    Guitar guitar = Guitar (serialNumber, price, 
            builder, model, type,
            backWood, topWood);

    guitars.push_back(guitar);
}

const Guitar Inventory::getGuitar(const string& serialNumber) const {
    for ( list<Guitar>::const_iterator i = guitars.begin(); i != guitars.end(); i++)
    {
        if (i->getSerialNumber() == serialNumber)
            return *i;
    }
    throw InventoryException("Null");
}

const list<Guitar> Inventory::search(const Guitar& searchGuitar) const{
    //create the result list
    list<Guitar> matchingGuitars;
    for ( list<Guitar >::const_iterator i = guitars.begin(); i != guitars.end(); i++)
    {
        // Ignore serial number since that's unique
        // Ignore price since that's unique

        // builder
        GBuilder builder = searchGuitar.getBuilder();
        if (!(builder.toString().empty()) &&
               (builder.toString() != i->getBuilder().toString()))
            continue;
        
        // model
        string model = searchGuitar.getModel();
        if (!(model.empty()) &&
               (model != i->getModel()))
            continue;

        // type
        GType type = searchGuitar.getType();
        if (!(type.toString().empty()) &&
               (type.toString() != i->getType().toString()))
            continue;

        // backWood
        GWood backWood = searchGuitar.getBackWood();
        if (!(backWood.toString().empty()) &&
               (backWood.toString() != i->getBackWood().toString()))
            continue;

        // topWood
        GWood topWood = searchGuitar.getTopWood();
        if (!(topWood.toString().empty()) &&
               (topWood.toString() != i->getTopWood().toString()))
            continue;

        //return *i;
        matchingGuitars.push_back(*i);
    }
    if (matchingGuitars.empty())
        throw InventoryException("Null");
    return matchingGuitars;
}

Inventory::~Inventory(){}
