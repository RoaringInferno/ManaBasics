#include "mana.hpp"

std::string colorToString(ColorCombination color) {
    switch(color) {
        case White:
            return "White";
        case Blue:
            return "Blue";
        case Black:
            return "Black";
        case Red:
            return "Red";
        case Green:
            return "Green";
        case Colorless:
            return "Colorless";
        
        case Azorius: //White/Blue
            return "Azorius";
        case Boros: //Red/White
            return "Boros";
        case Dimir: //Blue/Black
            return "Dimir";
        case Golgari: //Black/Green
            return "Golgari";
        case Gruul: //Red/Green
            return "Gruul";
        case Izzet: //Blue/Red
            return "Izzet";
        case Orzhov: //White/Black
            return "Orzhov";
        case Rakdos: //Black/Red
            return "Rakdos";
        case Selesnya: //White/Green
            return "Selesnya";
        case Simic: //Blue/Green
            return "Simic";
        
        case Abzan: //White/Black/Green
            return "Abzan";
        case Bant: //White/Blue/Green
            return "Bant";
        case Esper: //White/Blue/Black
            return "Esper";
        case Grixis: //Blue/Black/Red
            return "Grixis";
        case Jeskai: //White/Blue/Red
            return "Jeskai";
        case Jund: //Black/Red/Green
            return "Jund";
        case Mardu: //White/Black/Red
            return "Mardu";
        case Naya: //White/Red/Green
            return "Naya";
        case Sultai: //Blue/Black/Green
            return "Sultai";
        case Temur: //Blue/Red/Green
            return "Temur";
        
        case Glint: //No White
            return "Glint";
        case Dune: //No Blue
            return "Dune";
        case Ink: //No Black
            return "Ink";
        case Witch: //No Red
            return "Witch";
        case Yore: //No Green
            return "Yore";
        
        case FiveColor: //All Colors
            return "FiveColor";
        default:
            return "";
    };
};
ColorCombination stringToColor(const std::string& colorString) {
    if (colorString == std::string("White")) {
        return ColorCombination::White;
    } else if (colorString == std::string("Blue")) {
        return ColorCombination::Blue;
    } else if (colorString == std::string("Black")) {
        return ColorCombination::Black;
    } else if (colorString == std::string("Red")) {
        return ColorCombination::Red;
    } else if (colorString == std::string("Green")) {
        return ColorCombination::Green;
    } else if (colorString == std::string("Colorless")) {
        return ColorCombination::Colorless;
    } else if (colorString == std::string("Azorius")) {
        return ColorCombination::Azorius;
    } else if (colorString == std::string("Boros")) {
        return ColorCombination::Boros;
    } else if (colorString == std::string("Dimir")) {
        return ColorCombination::Dimir;
    } else if (colorString == std::string("Golgari")) {
        return ColorCombination::Golgari;
    } else if (colorString == std::string("Gruul")) {
        return ColorCombination::Gruul;
    } else if (colorString == std::string("Izzet")) {
        return ColorCombination::Izzet;
    } else if (colorString == std::string("Orzhov")) {
        return ColorCombination::Orzhov;
    } else if (colorString == std::string("Rakdos")) {
        return ColorCombination::Rakdos;
    } else if (colorString == std::string("Selesnya")) {
        return ColorCombination::Selesnya;
    } else if (colorString == std::string("Simic")) {
        return ColorCombination::Simic;
    } else if (colorString == std::string("Abzan")) {
        return ColorCombination::Abzan;
    } else if (colorString == std::string("Bant")) {
        return ColorCombination::Bant;
    } else if (colorString == std::string("Esper")) {
        return ColorCombination::Esper;
    } else if (colorString == std::string("Grixis")) {
        return ColorCombination::Grixis;
    } else if (colorString == std::string("Jeskai")) {
        return ColorCombination::Jeskai;
    } else if (colorString == std::string("Jund")) {
        return ColorCombination::Jund;
    } else if (colorString == std::string("Mardu")) {
        return ColorCombination::Mardu;
    } else if (colorString == std::string("Naya")) {
        return ColorCombination::Naya;
    } else if (colorString == std::string("Sultai")) {
        return ColorCombination::Sultai;
    } else if (colorString == std::string("Temur")) {
        return ColorCombination::Temur;
    } else if (colorString == std::string("Glint")) {
        return ColorCombination::Glint;
    } else if (colorString == std::string("Dune")) {
        return ColorCombination::Dune;
    } else if (colorString == std::string("Ink")) {
        return ColorCombination::Ink;
    } else if (colorString == std::string("Witch")) {
        return ColorCombination::Witch;
    } else if (colorString == std::string("Yore")) {
        return ColorCombination::Yore;
    } else if (colorString == std::string("FiveColor")) {
        return ColorCombination::FiveColor;
    } else {
        // Invalid color string
        return ColorCombination::Colorless;
    }
};

constexpr bool hasWhite(ColorCombination color) {
    switch(color) {
        case White:
            return true;
        case Blue:
            return false;
        case Black:
            return false;
        case Red:
            return false;
        case Green:
            return false;
        case Colorless:
            return false;
        
        case Azorius: //White/Blue
            return true;
        case Boros: //Red/White
            return true;
        case Dimir: //Blue/Black
            return false;
        case Golgari: //Black/Green
            return false;
        case Gruul: //Red/Green
            return false;
        case Izzet: //Blue/Red
            return false;
        case Orzhov: //White/Black
            return true;
        case Rakdos: //Black/Red
            return false;
        case Selesnya: //White/Green
            return true;
        case Simic: //Blue/Green
            return false;
        
        case Abzan: //White/Black/Green
            return true;
        case Bant: //White/Blue/Green
            return true;
        case Esper: //White/Blue/Black
            return true;
        case Grixis: //Blue/Black/Red
            return false;
        case Jeskai: //White/Blue/Red
            return true;
        case Jund: //Black/Red/Green
            return false;
        case Mardu: //White/Black/Red
            return true;
        case Naya: //White/Red/Green
            return true;
        case Sultai: //Blue/Black/Green
            return false;
        case Temur: //Blue/Red/Green
            return false;
        
        case Glint: //No White
            return false;
        case Dune: //No Blue
            return true;
        case Ink: //No Black
            return true;
        case Witch: //No Red
            return true;
        case Yore: //No Green
            return true;
        
        case FiveColor: //All Colors
            return true;
        default:
            return false;
    };
}
constexpr bool hasBlue(ColorCombination color) {
    switch(color) {
        case White:
            return false;
        case Blue:
            return true;
        case Black:
            return false;
        case Red:
            return false;
        case Green:
            return false;
        case Colorless:
            return false;
        
        case Azorius: //White/Blue
            return true;
        case Boros: //Red/White
            return false;
        case Dimir: //Blue/Black
            return true;
        case Golgari: //Black/Green
            return false;
        case Gruul: //Red/Green
            return false;
        case Izzet: //Blue/Red
            return true;
        case Orzhov: //White/Black
            return false;
        case Rakdos: //Black/Red
            return false;
        case Selesnya: //White/Green
            return false;
        case Simic: //Blue/Green
            return true;
        
        case Abzan: //White/Black/Green
            return false;
        case Bant: //White/Blue/Green
            return false;
        case Esper: //White/Blue/Black
            return true;
        case Grixis: //Blue/Black/Red
            return true;
        case Jeskai: //White/Blue/Red
            return true;
        case Jund: //Black/Red/Green
            return false;
        case Mardu: //White/Black/Red
            return false;
        case Naya: //White/Red/Green
            return false;
        case Sultai: //Blue/Black/Green
            return true;
        case Temur: //Blue/Red/Green
            return true;
        
        case Glint: //No White
            return true;
        case Dune: //No Blue
            return false;
        case Ink: //No Black
            return true;
        case Witch: //No Red
            return true;
        case Yore: //No Green
            return true;
        
        case FiveColor: //All Colors
            return true;
        default:
            return false;
    };
}
constexpr bool hasBlack(ColorCombination color)  {
    switch(color) {
        case White:
            return false;
        case Blue:
            return false;
        case Black:
            return true;
        case Red:
            return false;
        case Green:
            return false;
        case Colorless:
            return false;
        
        case Azorius: //White/Blue
            return false;
        case Boros: //Red/White
            return false;
        case Dimir: //Blue/Black
            return true;
        case Golgari: //Black/Green
            return true;
        case Gruul: //Red/Green
            return false;
        case Izzet: //Blue/Red
            return false;
        case Orzhov: //White/Black
            return true;
        case Rakdos: //Black/Red
            return true;
        case Selesnya: //White/Green
            return false;
        case Simic: //Blue/Green
            return false;
        
        case Abzan: //White/Black/Green
            return true;
        case Bant: //White/Blue/Green
            return false;
        case Esper: //White/Blue/Black
            return true;
        case Grixis: //Blue/Black/Red
            return true;
        case Jeskai: //White/Blue/Red
            return false;
        case Jund: //Black/Red/Green
            return true;
        case Mardu: //White/Black/Red
            return true;
        case Naya: //White/Red/Green
            return false;
        case Sultai: //Blue/Black/Green
            return true;
        case Temur: //Blue/Red/Green
            return false;
        
        case Glint: //No White
            return true;
        case Dune: //No Blue
            return true;
        case Ink: //No Black
            return false;
        case Witch: //No Red
            return true;
        case Yore: //No Green
            return true;
        
        case FiveColor: //All Colors
            return true;
        default:
            return false;
    };
}
constexpr bool hasRed(ColorCombination color) {
    switch(color) {
        case White:
            return false;
        case Blue:
            return false;
        case Black:
            return false;
        case Red:
            return true;
        case Green:
            return false;
        case Colorless:
            return false;
        
        case Azorius: //White/Blue
            return false;
        case Boros: //Red/White
            return true;
        case Dimir: //Blue/Black
            return false;
        case Golgari: //Black/Green
            return false;
        case Gruul: //Red/Green
            return true;
        case Izzet: //Blue/Red
            return true;
        case Orzhov: //White/Black
            return false;
        case Rakdos: //Black/Red
            return true;
        case Selesnya: //White/Green
            return false;
        case Simic: //Blue/Green
            return false;
        
        case Abzan: //White/Black/Green
            return false;
        case Bant: //White/Blue/Green
            return false;
        case Esper: //White/Blue/Black
            return false;
        case Grixis: //Blue/Black/Red
            return true;
        case Jeskai: //White/Blue/Red
            return true;
        case Jund: //Black/Red/Green
            return false;
        case Mardu: //White/Black/Red
            return true;
        case Naya: //White/Red/Green
            return true;
        case Sultai: //Blue/Black/Green
            return false;
        case Temur: //Blue/Red/Green
            return true;
        
        case Glint: //No White
            return true;
        case Dune: //No Blue
            return true;
        case Ink: //No Black
            return true;
        case Witch: //No Red
            return false;
        case Yore: //No Green
            return true;
        
        case FiveColor: //All Colors
            return true;
        default:
            return false;
    };
}
constexpr bool hasGreen(ColorCombination color) {
    switch(color) {
        case White:
            return false;
        case Blue:
            return false;
        case Black:
            return false;
        case Red:
            return false;
        case Green:
            return true;
        case Colorless:
            return false;
        
        case Azorius: //White/Blue
            return false;
        case Boros: //Red/White
            return false;
        case Dimir: //Blue/Black
            return false;
        case Golgari: //Black/Green
            return true;
        case Gruul: //Red/Green
            return true;
        case Izzet: //Blue/Red
            return false;
        case Orzhov: //White/Black
            return false;
        case Rakdos: //Black/Red
            return false;
        case Selesnya: //White/Green
            return true;
        case Simic: //Blue/Green
            return true;
        
        case Abzan: //White/Black/Green
            return true;
        case Bant: //White/Blue/Green
            return true;
        case Esper: //White/Blue/Black
            return false;
        case Grixis: //Blue/Black/Red
            return false;
        case Jeskai: //White/Blue/Red
            return false;
        case Jund: //Black/Red/Green
            return true;
        case Mardu: //White/Black/Red
            return false;
        case Naya: //White/Red/Green
            return true;
        case Sultai: //Blue/Black/Green
            return true;
        case Temur: //Blue/Red/Green
            return true;
        
        case Glint: //No White
            return true;
        case Dune: //No Blue
            return true;
        case Ink: //No Black
            return true;
        case Witch: //No Red
            return true;
        case Yore: //No Green
            return false;
        
        case FiveColor: //All Colors
            return true;
        default:
            return false;
    };
}

std::bitset<5> getColors(ColorCombination color) {
    std::bitset<5> colors;
    colors.set(0, hasWhite(color));
    colors.set(1, hasBlue(color));
    colors.set(2, hasBlack(color));
    colors.set(3, hasRed(color));
    colors.set(4, hasGreen(color));
    return colors;
}