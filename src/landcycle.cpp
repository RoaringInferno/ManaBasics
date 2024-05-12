#include "landcycle.hpp"

ManaSourceSignature getManaSourceSignature(std::string name)
{
    auto i = string_to_ms.find(name);
    if (i != string_to_ms.end()) {
        return i->second;
    } else {
        return ManaSourceSignature::Basic;
    }
}