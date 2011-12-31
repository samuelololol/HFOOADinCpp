#include "Inventory.h"

Inventory::Inventory() {}

void Inventory::addGuitar(const string serialNumber, const double price, 
                          const GuitarSpec spec)
{
    Guitar guitar = Guitar (serialNumber, price, spec);
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

const list<Guitar> Inventory::search(const GuitarSpec& searchGuitar) const{
    //create the result list
    list<Guitar> matchingGuitars;
    for ( list<Guitar >::const_iterator i = guitars.begin(); i != guitars.end(); i++)
    {
        // Ignore serial number since that's unique
        // Ignore price since that's unique
        
        // GuitarSpec
        GuitarSpec searchSpec = i->getSpec();

        //if(searchSpec.matches(searchGuitar))
        if(searchSpec == searchGuitar)
            //add to list;
            matchingGuitars.push_back(*i);
    }
    if (matchingGuitars.empty())
        throw InventoryException("Null");

    return matchingGuitars;
}

Inventory::~Inventory(){}
