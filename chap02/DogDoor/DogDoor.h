#ifndef __DOGDOOR_H__
#define  __DOGDOOR_H__

#include <iostream>

class DogDoor {
    public:
        DogDoor();
        void open();
        void close();
        bool isOpen();

    private:
        bool open_;
};
#endif
