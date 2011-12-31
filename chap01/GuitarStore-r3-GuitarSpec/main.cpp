#include <iostream>
#include "Guitar.h"
#include "Inventory.h"

using namespace std;

int main(int argc, const char *argv[])
{
    Inventory inventory;
    GuitarSpec whatErinLikes = GuitarSpec(GBuilder::FENDER, "Stratocastor",
                                  GType::ELECTRIC, GWood::ALDER, GWood::ALDER);


    //add a guitar
    GuitarSpec newspec = GuitarSpec(GBuilder::FENDER, "Stratocastor",
                                    GType::ELECTRIC, GWood::ALDER, GWood::ALDER);
    inventory.addGuitar("V95693", 1499.95, newspec) ;
    inventory.addGuitar("V9512", 1549.95, newspec) ;



    try{
        list<Guitar> guitars = inventory.search(whatErinLikes);

        cout << "Erin, you might like these guitars:" << endl;
        for ( list<Guitar >::const_iterator i = guitars.begin(); i != guitars.end(); i++){
            GuitarSpec spec = i->getSpec();

            cout <<"  We have a " << spec.getBuilder()
                 <<" " << spec.getModel()
                 <<" " << spec.getType() << " guitar:" << endl
                 <<"     " << spec.getBackWood() << " back and sides," << endl
                 <<"     " << spec.getTopWood() << " top.\n  You can have it for only $"
                 << i->getPrice() << "!\n  ----"  << endl;
        }
    }
    catch(InventoryException &ie) {
        cout << "Sorry, Erin, we have nothing for you." << endl;
    }
    return 0;
}
