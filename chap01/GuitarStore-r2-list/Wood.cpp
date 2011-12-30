#include "Wood.h"
const GWood GWood::INDIAN_ROSEWOOD("INDIAN_ROSEWOOD");
const GWood GWood::BRAZILIAN_ROSEWOOD("BRAZILIAN_ROSEWOOD");
const GWood GWood::MAHOGANY("MAHOGANY");
const GWood GWood::MAPLE("MAPLE");
const GWood GWood::COCOBOLO("COCOBOLO");
const GWood GWood::CEDAR("CEDAR");
const GWood GWood::ADIRONDACK("ADIRONDACK");
const GWood GWood::ALDER("ALDER");
const GWood GWood::SITKA("SITKA");

std::ostream& operator<<(std::ostream& os, const GWood &r)
{
    os << r.toString();
    return os;
}
