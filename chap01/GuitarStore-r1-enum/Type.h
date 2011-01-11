#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class GType {

    string tostring_;

    GType(string const s){
        tostring_ = s;
    }

public:
    static const GType ACOUSTIC;
    static const GType ELECTRIC;

    const string toString(){
        return tostring_;
    }
};
