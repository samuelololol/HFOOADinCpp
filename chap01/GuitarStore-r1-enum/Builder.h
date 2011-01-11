#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class GBuilder {

    string tostring_;

    GBuilder(string const s){
        tostring_ = s;
    }

public:
    static const GBuilder FENDER;
    static const GBuilder MARTIN;
    static const GBuilder GIBSON;
    static const GBuilder COLLINGS;
    static const GBuilder OLSON;
    static const GBuilder RYAN;
    static const GBuilder PRS;
    static const GBuilder ANY;

    const string toString(){
        return tostring_;
    }
};
