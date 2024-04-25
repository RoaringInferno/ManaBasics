#include "landcycle.hpp"

#include "mana.hpp"
#include "duallands.hpp"
#include "triomes.hpp"

#include <bitset>

LandCycle::LandCycle() {}

void LandCycle::addLands(std::vector<Land> &manabase, ColorCombination colors) const
{
    std::bitset<5> color_bits = getColors(colors);

    for (Land i : lands)
    {
        for (int color = 0; color < 5; ++color) {
            std::bitset<5> land_colors = getColors(i.colors);
            if (land_colors[color] && color_bits[color]) {
                manabase.push_back(i);
            }
        }
    }
}

DualLandCycle::DualLandCycle(DualCycle _cycle) : cycle(_cycle), LandCycle()
{
    const Land* CycleData;
    switch (cycle)
    {
        case DualCycle::Surveil:
            CycleData = &SurveilLandData[0];
        case DualCycle::Gain:
            CycleData = &GainLandData[0];
        case DualCycle::Fast:
            CycleData = &FastLandData[0];
        case DualCycle::Pain:
            CycleData = &PainLandData[0];
        case DualCycle::FetchableTapped:
            CycleData = &FetchableTappedLandData[0];
        case DualCycle::Slow:
            CycleData = &SlowLandData[0];
        case DualCycle::Reveal:
            CycleData = &RevealLandData[0];
        case DualCycle::KaldheimSnow:
            CycleData = &KaldheimSnowLandData[0];
        case DualCycle::Pathway:
            CycleData = &PathwayLandData[0];
        case DualCycle::Scry:
            CycleData = &ScryLandData[0];
        case DualCycle::Shock:
            CycleData = &ShockLandData[0];
        case DualCycle::Guildgate:
            CycleData = &GuildgateLandData[0];
        case DualCycle::Check:
            CycleData = &CheckLandData[0];
        case DualCycle::Generic:
            CycleData = &GenericLandData[0];
        case DualCycle::Fetch:
            CycleData = &FetchLandData[0];
        case DualCycle::Artifact:
            CycleData = &ArtifactLandData[0];
        case DualCycle::Filter:
            CycleData = &FilterLandData[0];
        case DualCycle::Bounce:
            CycleData = &BounceLandData[0];
        case DualCycle::Battlebond:
            CycleData = &BattlebondLandData[0];
        case DualCycle::OdysseyFilter:
            CycleData = &OdysseyFilterLandData[0];
        case DualCycle::Dual:
            CycleData = &DualLandData[0];
    };

    for (int i = 0; i < 10; ++i) {
        lands[i] = CycleData[i];
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
    };

    for (int i = 0; i < 10; ++i) {
        lands[i] = CycleData[i];
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