#pragma once

#include "mana.hpp"
#include "landcycle.hpp"

#include <vector>

class ManaBase {
private:
    std::vector<Land> lands;

public:
    const ColorCombination color_combination;

    ManaBase(ColorCombination colors = ColorCombination::Colorless);
    ~ManaBase();

    void exportOut() const;

    void addLandCycle(const LandCycle &cycle);
};