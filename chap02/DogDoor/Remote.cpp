#include "Remote.h"
using std::cout;
using std::endl;

Remote::Remote(){}
Remote::Remote(DogDoor door):door_(door)
{}

void Remote::pressButton(){
    cout<<"Pressing the remote control button..."<<endl;
    if (this->door_.isOpen()) {
        this->door_.close();
    }
    else{
        this->door_.open();
    }
}

