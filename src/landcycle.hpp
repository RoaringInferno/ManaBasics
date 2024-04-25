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

DualCycle getDualCycle(const std::string& str);

std::string exportDualCycle(DualCycle cycle);

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

TriLandCycle getTriLandCycle(const std::string& str);

std::string exportTriLandCycle(TriLandCycle cycle);


class TriomeCycle : public LandCycle {
public:
    TriLandCycle cycle;

    TriomeCycle(TriLandCycle _cycle = TriLandCycle::Tri);
    ~TriomeCycle();
};