#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class GBuilder {
    
    friend std::ostream& operator<<(std::ostream& os, const GBuilder &r);
    string tostring_;


public:
    static const GBuilder FENDER;
    static const GBuilder MARTIN;
    static const GBuilder GIBSON;
    static const GBuilder COLLINGS;
    static const GBuilder OLSON;
    static const GBuilder RYAN;
    static const GBuilder PRS;
    static const GBuilder ANY;

    GBuilder(){}

    GBuilder(string const s)
        :tostring_(s){} 

    GBuilder(const GBuilder &r)
        :tostring_(r.toString()){}

    const string toString() const{
        if ((tostring_ == "FENDER") || 
            (tostring_ == "MARTIN") ||
            (tostring_ == "GIBSON") ||
            (tostring_ == "COLLINGS") ||
            (tostring_ == "OLSON") ||
            (tostring_ == "RYAN") ||
            (tostring_ == "PRS") ||
            (tostring_ == "ANY") 
            )
            return tostring_;
        else
            return "Fail Type";
    }
};
