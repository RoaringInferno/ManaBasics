#include <iostream>
#include <set>

#include "mana.hpp"
#include "lands.hpp"
#include "landcycle.hpp"
#include "land.hpp"

int main(int argc, char** argv) {
    std::string* color_string;
    if (argc > 1) {
        color_string = new std::string(argv[1]);
    } else {
        std::string temp;
        std::cout << "Colors:\n- White,\n- Blue,\n- Black,\n- Red,\n- Green,\n- Colorless,\n- Azorius, (White/Blue)\n- Boros, (Red/White)\n- Dimir, (Blue/Black)\n- Golgari, (Black/Green)\n- Gruul, (Red/Green)\n- Izzet, (Blue/Red)\n- Orzhov, (White/Black)\n- Rakdos, (Black/Red)\n- Selesnya, (White/Green)\n- Simic, (Blue/Green)\n- Abzan, (White/Black/Green)\n- Bant, (White/Blue/Green)\n- Esper, (White/Blue/Black)\n- Grixis, (Blue/Black/Red)\n- Jeskai, (White/Blue/Red)\n- Jund, (Black/Red/Green)\n- Mardu, (White/Black/Red)\n- Naya, (White/Red/Green)\n- Sultai, (Blue/Black/Green)\n- Temur, (Blue/Red/Green)\n- Glint, (No White)\n- Dune, (No Blue)\n- Ink, (No Black)\n- Witch, (No Red)\n- Yore, (No Green)\n- FiveColor //All Colors\n";
        std::cin >> temp;
        color_string = new std::string(temp);
    }
    ColorCombination colors = stringToColor(*color_string);

    delete color_string;


    std::string input;
    std::set<ManaSourceSignature> sources;
    std::cout << "Land Cycle Name (q to quit): ";
    for (const auto& pair : string_to_ms) {
        std::cout << "\n- " << pair.first;
    }
    std::cout << "\n";
    while (true) {
        bool is_dual_land = false;
        bool run = true;
        std::cin >> input;
        if (input == "q") { break; }
        sources.insert(getManaSourceSignature(input));
    }

    
    std::cout << "Total Manabase: (Type anything to continue)\n";
    for (Land i : lands) {
        if (auto search = sources.find(i.cycle); search != sources.end()) {
            if (contains(colors, i.colors)) {
                std::cout << i.name << "\n";
            }
        }
    }

    std::cin >> input;
}