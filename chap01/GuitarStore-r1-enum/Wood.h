#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class GWood {

    friend std::ostream& operator<<(std::ostream& os, const GWood &r);
    string tostring_;


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

    GWood(){}  
    GWood(string const s)
        :tostring_(s){}
    GWood(const GWood &r)
        :tostring_(r.toString()){}  

    const string toString() const{
        if ((tostring_ == "INDIAN_ROSEWOOD") || 
            (tostring_ == "BRAZILIAN_ROSEWOOD") ||
            (tostring_ == "MAHOGANY") ||
            (tostring_ == "MAPLE") ||
            (tostring_ == "COCOBOLO") ||
            (tostring_ == "CEDAR") ||
            (tostring_ == "ADIRONDACK") ||
            (tostring_ == "ALDER") ||
            (tostring_ == "SITKA")
            ) 
            return tostring_;
        else
            return "FAIL";
    }
};
