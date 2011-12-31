#ifndef __TYPE_H__
#define __TYPE_H__
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class GType {

    friend std::ostream& operator<<(std::ostream& os, const GType &r);
    string tostring_;


public:
    static const GType ACOUSTIC;
    static const GType ELECTRIC;

    GType(){}  
    GType(const string& s)
        :tostring_(s){}
    GType(const GType &r)
        :tostring_(r.toString()){}  

    const string toString() const{
        if ((tostring_ == "ACOUSTIC") || (tostring_ == "ELECTRIC"))
            return tostring_;
        else
            return "FAIL";
    }
};
#endif
