#pragma once

#include <string>
#include "mana.hpp"
#include "landcycle.hpp"

typedef struct {
    std::string name;
    ColorCombination colors;
    LandCycle cycle;
} Land;