#include <iostream>
#include "Guitar.h"
#include "Inventory.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Inventory ii;
    Guitar a;
    string la = a.getBuilder();
    if (la == "")
        cout << "haha" << endl;
    return 0;
}
