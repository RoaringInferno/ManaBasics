#include "landcycle.hpp"

#include "mana.hpp"
#include "duallands.hpp"
#include "triomes.hpp"

#include <bitset>
#include <iostream>

LandCycle::LandCycle() {}

void LandCycle::addLands(std::vector<Land> &manabase, ColorCombination colors) const
{
    std::bitset<5> color_bits = getColors(colors);

    for (Land i : lands)
    {
        std::bitset<5> land_colors = getColors(i.colors);
        int color = 0;
        for (; color < 5; ++color) {
            if (land_colors[color] && !color_bits[color]) {
                break;
            }
        }
        if (color == 5) {
            std::cout << "Adding: " << i.name << std::endl;
            manabase.push_back(i);
        }
    }
}

DualLandCycle::DualLandCycle(DualCycle _cycle) : cycle(_cycle), LandCycle()
{
    const Land* CycleData;

    // std::cout << _cycle << std::endl;
    switch (_cycle)
    {
        case DualCycle::Surveil:
            CycleData = &SurveilLandData[0];
            break;
        case DualCycle::Gain:
            CycleData = &GainLandData[0];
            break;
        case DualCycle::Fast:
            CycleData = &FastLandData[0];
            break;
        case DualCycle::Pain:
            CycleData = &PainLandData[0];
            break;
        case DualCycle::FetchableTapped:
            CycleData = &FetchableTappedLandData[0];
            break;
        case DualCycle::Slow:
            CycleData = &SlowLandData[0];
            break;
        case DualCycle::Reveal:
            CycleData = &RevealLandData[0];
            break;
        case DualCycle::KaldheimSnow:
            CycleData = &KaldheimSnowLandData[0];
            break;
        case DualCycle::Pathway:
            CycleData = &PathwayLandData[0];
            break;
        case DualCycle::Scry:
            CycleData = &ScryLandData[0];
            break;
        case DualCycle::Shock:
            CycleData = &ShockLandData[0];
            break;
        case DualCycle::Guildgate:
            CycleData = &GuildgateLandData[0];
            break;
        case DualCycle::Check:
            CycleData = &CheckLandData[0];
            break;
        case DualCycle::Generic:
            CycleData = &GenericLandData[0];
            break;
        case DualCycle::Fetch:
            CycleData = &FetchLandData[0];
            break;
        case DualCycle::Artifact:
            CycleData = &ArtifactLandData[0];
            break;
        case DualCycle::Filter:
            CycleData = &FilterLandData[0];
            break;
        case DualCycle::Bounce:
            CycleData = &BounceLandData[0];
            break;
        case DualCycle::Battlebond:
            CycleData = &BattlebondLandData[0];
            break;
        case DualCycle::OdysseyFilter:
            CycleData = &OdysseyFilterLandData[0];
            break;
        case DualCycle::Dual:
            CycleData = &DualLandData[0];
            break;
        default:
            throw std::invalid_argument("Invalid enum value");
            break;
    };

    for (int i = 0; i < 10; ++i) {
        this->lands[i] = CycleData[i];

        // std::cout << "Land: " << this->lands[i].name << std::endl;
    }
}

DualLandCycle::~DualLandCycle() {}

TriomeCycle::TriomeCycle(TriLandCycle _cycle) : cycle(_cycle), LandCycle()
{
    const Land* CycleData;
    switch (cycle)
    {
        case TriLandCycle::TriCycle:
            CycleData = &TriCycleLandData[0];
        case TriLandCycle::Tri:
            CycleData = &TriLandData[0];
        default:
            throw std::invalid_argument("Invalid enum value");
    };

    for (int i = 0; i < 10; ++i) {
        this->lands[i] = CycleData[i];
        // std::cout << "Land: " << this->lands[i].name << std::endl;
    }
}

TriomeCycle::~TriomeCycle() {}

DualCycle getDualCycle(const std::string& str) {
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

TriLandCycle getTriLandCycle(const std::string& str) {
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