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
