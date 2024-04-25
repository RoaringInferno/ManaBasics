#include <iostream>

#include "mana.hpp"
#include "manabase.hpp"
#include "landcycle.hpp"

int main() {
    std::string color_string;
    std::cout << "Colors:\n- White,\n- Blue,\n- Black,\n- Red,\n- Green,\n- Colorless,\n- Azorius, (White/Blue)\n- Boros, (Red/White)\n- Dimir, (Blue/Black)\n- Golgari, (Black/Green)\n- Gruul, (Red/Green)\n- Izzet, (Blue/Red)\n- Orzhov, (White/Black)\n- Rakdos, (Black/Red)\n- Selesnya, (White/Green)\n- Simic, (Blue/Green)\n- Abzan, (White/Black/Green)\n- Bant, (White/Blue/Green)\n- Esper, (White/Blue/Black)\n- Grixis, (Blue/Black/Red)\n- Jeskai, (White/Blue/Red)\n- Jund, (Black/Red/Green)\n- Mardu, (White/Black/Red)\n- Naya, (White/Red/Green)\n- Sultai, (Blue/Black/Green)\n- Temur, (Blue/Red/Green)\n- Glint, (No White)\n- Dune, (No Blue)\n- Ink, (No Black)\n- Witch, (No Red)\n- Yore, (No Green)\n- FiveColor //All Colors\n";
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

    std::cin >> input;
}