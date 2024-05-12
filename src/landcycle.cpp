#include "landcycle.hpp"

LandCycle getLandCycle(std::string name)
{
    if (name == "Basic") {return LandCycle::Basic;};
    if (name == "Surveil") {return LandCycle::Surveil;};
    if (name == "Gain") {return LandCycle::Gain;};
    if (name == "Fast") {return LandCycle::Fast;};
    if (name == "Pain") {return LandCycle::Pain;};
    if (name == "FetchableTapped") {return LandCycle::FetchableTapped;};
    if (name == "Slow") {return LandCycle::Slow;};
    if (name == "Reveal") {return LandCycle::Reveal;};
    if (name == "KaldheimSnow") {return LandCycle::KaldheimSnow;};
    if (name == "Pathway") {return LandCycle::Pathway;};
    if (name == "Scry") {return LandCycle::Scry;};
    if (name == "Shock") {return LandCycle::Shock;};
    if (name == "Guildgate") {return LandCycle::Guildgate;};
    if (name == "Check") {return LandCycle::Check;};
    if (name == "Generic") {return LandCycle::Generic;};
    if (name == "Fetch") {return LandCycle::Fetch;};
    if (name == "Artifact") {return LandCycle::Artifact;};
    if (name == "Filter") {return LandCycle::Filter;};
    if (name == "Bounce") {return LandCycle::Bounce;};
    if (name == "Battlebond") {return LandCycle::Battlebond;};
    if (name == "OdysseyFilter") {return LandCycle::OdysseyFilter;};
    if (name == "Dual") {return LandCycle::Dual;};
    if (name == "TriCycle") {return LandCycle::TriCycle;};
    if (name == "Tri") {return LandCycle::Tri;};
    return LandCycle::Basic;
}