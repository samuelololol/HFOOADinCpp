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

    try{
        Guitar guitar = inventory.search(whatErinLikes);

        cout << "Erin, you might like this " << guitar.getBuilder()
            << " " << guitar.getModel()
            << " " << guitar.getType() << " guitar:" << endl
            << guitar.getBackWood() << " back and sides," << endl
            << guitar.getTopWood() << " top.\nYou can have it for only $"
            << guitar.getPrice() << "!" << endl;


    }
    catch(InventoryException &ie) {
        cout << "Sorry, Erin, we have nothing for you." << endl;
    }
    return 0;
}
