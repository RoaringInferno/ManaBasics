#include <iostream>

#include "mana.hpp"
#include "manabase.hpp"
#include "landcycle.hpp"

int main() {
    std::string color_string;
    std::cout << "Colors: \n";
    std::cin >> color_string;
    ColorCombination colors = stringToColor(color_string);
    ManaBase manabase(colors);

    std::string input;
    while (true) {
        std::cout << "Land Cycle Type: (Bi or Tri) ";
        std::cin >> input;
        if (input == "q") { break; }
        bool is_bicycle = input == "Bi";

        std::cout << "Land Cycle Name: ";
        if (is_bicycle) {
            std::cout << " (Surveil, Gain, Fast, Pain, FetchableTapped, Slow, Reveal, KaldheimSnow, Pathway, Scry, Shock, Guildgate, Check, Generic, Fetch, Artifact, Filter, Bounce, Battlebond, OdysseyFilter, Dual) ";
        } else {
            std::cout << " (TriCycle, Tri) ";
        }
        std::cin >> input;
        if (input == "q") { break; }
        if (is_bicycle) {
            DualLandCycle cycle(getDualCycle(input));
            manabase.addLandCycle(cycle);
        } else {
            TriomeCycle cycle(getTriLandCycle(input));
            manabase.addLandCycle(cycle);
        }
    }
    manabase.exportOut();
}