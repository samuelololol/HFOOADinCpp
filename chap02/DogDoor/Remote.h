#ifndef __REMOTE_H__
#define  __REMOTE_H__

#include <iostream>
#include "DogDoor.h"

class Remote {
    public:
        Remote();
        Remote(DogDoor door);
        void pressButton();

    private:
        DogDoor door_;
};
#endif
