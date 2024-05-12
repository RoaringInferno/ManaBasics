#pragma once

#include "mana.hpp"

#include <string>


enum LandCycle {
    Basic,
    Surveil,
    Gain,
    Fast,
    Pain,
    FetchableTapped,
    Slow,
    Reveal,
    KaldheimSnow,
    Pathway,
    Scry,
    Shock,
    Guildgate,
    Check,
    Generic,
    Fetch,
    Artifact,
    Filter,
    Bounce,
    Battlebond,
    OdysseyFilter,
    Dual,
    TriCycle,
    Tri
};

LandCycle getLandCycle(std::string name);