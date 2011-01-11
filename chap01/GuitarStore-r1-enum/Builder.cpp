#include "Builder.h"
const GBuilder GBuilder::FENDER("FENDER");
const GBuilder GBuilder::MARTIN("MARTIN");
const GBuilder GBuilder::GIBSON("GIBSON");
const GBuilder GBuilder::COLLINGS("COLLINGS");
const GBuilder GBuilder::OLSON("OLSON");
const GBuilder GBuilder::RYAN("RYAN");
const GBuilder GBuilder::PRS("PRS");
const GBuilder GBuilder::ANY("ANY");

std::ostream& operator<<(std::ostream& os, const GBuilder &r)
{
    os << r.toString();
    return os;
}
