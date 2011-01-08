#ifndef __GUITAR_H__
#define __GUITAR_H__
#include <string>
using namespace std;

class Guitar {
    private:
        string serialNumber_, builder_, model_, type_, backWood_, topWood_;
        double price_;
    public:
        Guitar();
        Guitar(string serialNumber, double price, 
                string builder, string model, string type,
                string backWood, string topWood);
        const string getSerialNumber() const;
        const double getPrice() const;
        void setPrice(float newPrice);
        const string getBuilder() const;
        const string getModel() const ;
        const string getType() const;
        const string getBackWood() const;
        const string getTopWood() const;
};
#endif
