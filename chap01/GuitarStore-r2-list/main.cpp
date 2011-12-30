#include <iostream>
#include "Guitar.h"
#include "Inventory.h"

using namespace std;

int main(int argc, const char *argv[])
{
    Inventory inventory;

    Guitar whatErinLikes = Guitar("",0, GBuilder::FENDER, "Stratocastor",
                                  GType::ELECTRIC, GWood::ALDER, GWood::ALDER);

    //add a guitar
    inventory.addGuitar("V95693", 1499.95, GBuilder::FENDER , "Stratocastor",
                        GType::ELECTRIC, GWood::ALDER, GWood::ALDER);

    inventory.addGuitar("V9512", 1549.95, GBuilder::FENDER , "Stratocastor",
                        GType::ELECTRIC, GWood::ALDER, GWood::ALDER);
    try{
        list<Guitar> guitars = inventory.search(whatErinLikes);

        cout << "Erin, you might like these guitars:" << endl;
        for ( list<Guitar >::const_iterator i = guitars.begin(); i != guitars.end(); i++){
            cout <<"  We have a " << i->getBuilder()
                 <<" " << i->getModel()
                 <<" " << i->getType() << " guitar:" << endl
                 <<"     " << i->getBackWood() << " back and sides," << endl
                 <<"     " << i->getTopWood() << " top.\n  You can have it for only $"
                 << i->getPrice() << "!\n  ----"  << endl;
        }
    }
    catch(InventoryException &ie) {
        cout << "Sorry, Erin, we have nothing for you." << endl;
    }
    return 0;
}
