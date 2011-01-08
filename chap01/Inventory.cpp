#include "Inventory.h"

Inventory::Inventory() {}

void Inventory:: addGuitar(string serialNumber, double price, 
        string builder, string model, 
        string type, string backWood, string topWood)
{
    Guitar* guitar = new Guitar (serialNumber, price, 
            builder, model, type,
            backWood, topWood);

    guitars.push_back(guitar);
}

const Guitar* Inventory::getGuitar(const string& serialNumber) const {
    for ( list<Guitar *>::const_iterator i = guitars.begin(); i != guitars.end(); i++)
    {
        if ((*i)->getSerialNumber() == serialNumber)
            return &**i;
    }
    return 0;
}

const Guitar* Inventory::search(const Guitar& searchGuitar) const{
    for ( list<Guitar *>::const_iterator i = guitars.begin(); i != guitars.end(); i++)
    {
        // no guitar
        if ((*i) == 0)
            continue;

        // Ignore serial number since that's unique
        // Ignore price since that's unique

        // builder
        string builder = searchGuitar.getBuilder();
        if (!(builder.compare("")) &&
               (!builder.compare((*i)->getBuilder())))
            continue;
        
        // model
        string model = searchGuitar.getModel();
        if (!(model.compare("")) &&
               (!model.compare((*i)->getModel())))
            continue;

        // type
        string type = searchGuitar.getType();
        if (!(type.compare("")) &&
               (!type.compare((*i)->getType())))
            continue;

        // backWood
        string backWood = searchGuitar.getBackWood();
        if (!(backWood.compare("")) &&
               (!backWood.compare((*i)->getBackWood())))
            continue;

        // topWood
        string topWood = searchGuitar.getTopWood();
        if (!(topWood.compare("")) &&
               (!topWood.compare((*i)->getTopWood())))
            continue;

        return &**i;
    }
    return 0;
}

Inventory::~Inventory(){

}
