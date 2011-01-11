#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class GWood {

    string tostring_;

    GWood(string const s){
        tostring_ = s;
    }

public:
    static const GWood INDIAN_ROSEWOOD;
    static const GWood BRAZILIAN_ROSEWOOD;
    static const GWood MAHOGANY;
    static const GWood MAPLE;
    static const GWood COCOBOLO;
    static const GWood CEDAR;
    static const GWood ADIRONDACK;
    static const GWood ALDER;
    static const GWood SITKA;

    const string toString(){
        return tostring_;
    }
};
