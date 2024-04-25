#pragma once

#include "land.hpp"
#include "mana.hpp"
#include <stdexcept>
#include <vector>

class LandCycle {
public:
    Land lands[10];

    LandCycle();

    void addLands(std::vector<Land> &manabase, ColorCombination colors) const;
};

enum DualCycle {
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
    Dual
};

constexpr DualCycle getDualCycle(const std::string& str) {
    if (str == "Surveil") {
        return DualCycle::Surveil;
    } else if (str == "Gain") {
        return DualCycle::Gain;
    } else if (str == "Fast") {
        return DualCycle::Fast;
    } else if (str == "Pain") {
        return DualCycle::Pain;
    } else if (str == "FetchableTapped") {
        return DualCycle::FetchableTapped;
    } else if (str == "Slow") {
        return DualCycle::Slow;
    } else if (str == "Reveal") {
        return DualCycle::Reveal;
    } else if (str == "KaldheimSnow") {
        return DualCycle::KaldheimSnow;
    } else if (str == "Pathway") {
        return DualCycle::Pathway;
    } else if (str == "Scry") {
        return DualCycle::Scry;
    } else if (str == "Shock") {
        return DualCycle::Shock;
    } else if (str == "Guildgate") {
        return DualCycle::Guildgate;
    } else if (str == "Check") {
        return DualCycle::Check;
    } else if (str == "Generic") {
        return DualCycle::Generic;
    } else if (str == "Fetch") {
        return DualCycle::Fetch;
    } else if (str == "Artifact") {
        return DualCycle::Artifact;
    } else if (str == "Filter") {
        return DualCycle::Filter;
    } else if (str == "Bounce") {
        return DualCycle::Bounce;
    } else if (str == "Battlebond") {
        return DualCycle::Battlebond;
    } else if (str == "OdysseyFilter") {
        return DualCycle::OdysseyFilter;
    } else if (str == "Dual") {
        return DualCycle::Dual;
    } else {
        // Handle invalid string
        throw std::invalid_argument("Invalid string");
    }
}

std::string exportDualCycle(DualCycle cycle) {
    switch (cycle) {
        case DualCycle::Surveil:
            return "Surveil";
        case DualCycle::Gain:
            return "Gain";
        case DualCycle::Fast:
            return "Fast";
        case DualCycle::Pain:
            return "Pain";
        case DualCycle::FetchableTapped:
            return "FetchableTapped";
        case DualCycle::Slow:
            return "Slow";
        case DualCycle::Reveal:
            return "Reveal";
        case DualCycle::KaldheimSnow:
            return "KaldheimSnow";
        case DualCycle::Pathway:
            return "Pathway";
        case DualCycle::Scry:
            return "Scry";
        case DualCycle::Shock:
            return "Shock";
        case DualCycle::Guildgate:
            return "Guildgate";
        case DualCycle::Check:
            return "Check";
        case DualCycle::Generic:
            return "Generic";
        case DualCycle::Fetch:
            return "Fetch";
        case DualCycle::Artifact:
            return "Artifact";
        case DualCycle::Filter:
            return "Filter";
        case DualCycle::Bounce:
            return "Bounce";
        case DualCycle::Battlebond:
            return "Battlebond";
        case DualCycle::OdysseyFilter:
            return "OdysseyFilter";
        case DualCycle::Dual:
            return "Dual";
        default:
            // Handle invalid enum value
            throw std::invalid_argument("Invalid enum value");
    }
}

class DualLandCycle : public LandCycle {
public:
    DualCycle cycle;

    DualLandCycle(DualCycle _cycle = DualCycle::Generic);
    ~DualLandCycle();  
};

enum TriLandCycle {
    TriCycle,
    Tri,
};

constexpr TriLandCycle getTriLandCycle(const std::string& str) {
    if (str == "TriCycle") {
        return TriLandCycle::TriCycle;
    } else if (str == "Tri") {
        return TriLandCycle::Tri;
    } else {
        // Handle invalid string
        throw std::invalid_argument("Invalid string");
    }
}

std::string exportTriLandCycle(TriLandCycle cycle) {
    switch (cycle) {
        case TriCycle:
            return "TriCycle";
        case Tri:
            return "Tri";
        default:
            // Handle invalid enum value
            throw std::invalid_argument("Invalid enum value");
    }
};


class TriomeCycle : public LandCycle {
public:
    TriLandCycle cycle;

    TriomeCycle(TriLandCycle _cycle = TriLandCycle::Tri);
    ~TriomeCycle();
};