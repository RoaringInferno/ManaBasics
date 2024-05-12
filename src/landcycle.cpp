#include "landcycle.hpp"

ManaSourceSignature getManaSourceSignature(std::string name)
{
    auto i = string_to_land.find(name);
    if (i != string_to_land.end()) {
        return i->second;
    } else {
        return ManaSourceSignature::Basic;
    }
}