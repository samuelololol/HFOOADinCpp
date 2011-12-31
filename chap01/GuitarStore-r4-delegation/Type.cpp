#include "Type.h"
const GType GType::ACOUSTIC = GType("ACOUSTIC");
const GType GType::ELECTRIC = GType("ELECTRIC");

std::ostream& operator<<(std::ostream& os, const GType &r)
{
    os << r.toString();
    return os;
}
