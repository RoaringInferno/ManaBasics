#pragma once

#include "mana.hpp"

#include <unordered_map>
#include <string>


enum ManaSourceSignature {
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

static std::unordered_map<std::string, ManaSourceSignature> const string_to_land = {
    {"Basic", ManaSourceSignature::Basic},
    {"Surveil", ManaSourceSignature::Surveil},
    {"Gain", ManaSourceSignature::Gain},
    {"Fast", ManaSourceSignature::Fast},
    {"Pain", ManaSourceSignature::Pain},
    {"FetchableTapped", ManaSourceSignature::FetchableTapped},
    {"Slow", ManaSourceSignature::Slow},
    {"Reveal", ManaSourceSignature::Reveal},
    {"KaldheimSnow", ManaSourceSignature::KaldheimSnow},
    {"Pathway", ManaSourceSignature::Pathway},
    {"Scry", ManaSourceSignature::Scry},
    {"Shock", ManaSourceSignature::Shock},
    {"Guildgate", ManaSourceSignature::Guildgate},
    {"Check", ManaSourceSignature::Check},
    {"Generic", ManaSourceSignature::Generic},
    {"Fetch", ManaSourceSignature::Fetch},
    {"Artifact", ManaSourceSignature::Artifact},
    {"Filter", ManaSourceSignature::Filter},
    {"Bounce", ManaSourceSignature::Bounce},
    {"Battlebond", ManaSourceSignature::Battlebond},
    {"OdysseyFilter", ManaSourceSignature::OdysseyFilter},
    {"Dual", ManaSourceSignature::Dual},
    {"TriCycle", ManaSourceSignature::TriCycle},
    {"Tri", ManaSourceSignature::Tri}
};

ManaSourceSignature getManaSourceSignature(std::string name);