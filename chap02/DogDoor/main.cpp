#include <iostream>
#include "DogDoor.h"
#include "Remote.h"

using std::cout;
using std::endl;

int main(int argc, char const* argv[])
{
    DogDoor door;
    Remote remote;

    cout <<"Fido barks to go outputside..." << endl;
    remote.pressButton();

    cout <<"Fido has gone outside..." << endl;
    remote.pressButton();
    
    cout <<"Fido's all done..." << endl;
    remote.pressButton();

    cout <<"Fido's back inside..." << endl;
    remote.pressButton();
    return 0;
}
