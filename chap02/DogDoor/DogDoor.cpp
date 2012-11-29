#include "DogDoor.h"
using std::cout;
using std::endl;

DogDoor::DogDoor():open_(false)
{}

void DogDoor::open(){
    cout<<"The dog door opens."<<endl;
    this->open_ = true;
}

void DogDoor::close(){
    cout<<"The dog door closes."<<endl;
    this->open_ = false;
}

bool DogDoor::isOpen(){
    return this->open_;
}
