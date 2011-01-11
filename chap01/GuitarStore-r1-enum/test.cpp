#include <iostream>
#include "Type.h"

static int global_static = 10;

int main(int argc, const char *argv[])
{
    static int local_static = global_static;
    cout << &global_static << endl
         << &local_static << endl;

    static GType p = GType::ACOUSTIC;
    cout << &p << endl;
    cout << &GType::ACOUSTIC << endl;
    return 0;
}
