#include "manabase.hpp"

#include <iostream>

ManaBase::ManaBase(ColorCombination colors) : color_combination(colors)
{
}

ManaBase::~ManaBase()
{
}

void ManaBase::exportOut() const
{
    for (Land i : lands)
    {
        std::cout << i.name << "\n";
    }
}

void ManaBase::addLandCycle(const LandCycle &cycle)
{
    cycle.addLands(lands, color_combination);
}
