#include "mana.hpp"

struct ColorCombinationData {
    std::string name;
    bool colors[5];
};

const ColorCombinationData colorData[] = { // WUBRG
    {"White", {true, false, false, false, false}},
    {"Blue", {false, true, false, false, false}},
    {"Black", {false, false, true, false, false}},
    {"Red", {false, false, false, true, false}},
    {"Green", {false, false, false, false, true}},
    {"Colorless", {false, false, false, false, false}},
    {"Azorius", {true, true, false, false, false}},
    {"Boros", {true, false, false, true, false}},
    {"Dimir", {false, true, true, false, false}},
    {"Golgari", {false, false, true, false, true}},
    {"Gruul", {false, false, false, true, true}},
    {"Izzet", {false, true, false, true, false}},
    {"Orzhov", {true, false, true, false, false}},
    {"Rakdos", {false, false, true, true, false}},
    {"Selesnya", {true, false, false, false, true}},
    {"Simic", {false, true, false, false, true}},
    {"Abzan", {true, false, true, false, true}},
    {"Bant", {true, true, false, false, true}},
    {"Esper", {true, true, true, false, false}},
    {"Grixis", {false, true, true, true, false}},
    {"Jeskai", {true, true, false, true, false}},
    {"Jund", {false, false, true, true, true}},
    {"Mardu", {true, false, true, true, false}},
    {"Naya", {true, false, false, true, true}},
    {"Sultai", {false, true, true, false, true}},
    {"Temur", {false, true, false, true, true}},
    {"Glint", {false, true, true, true, true}},
    {"Dune", {true, false, true, true, true}},
    {"Ink", {true, true, false, true, true}},
    {"Witch", {true, true, true, false, true}},
    {"Yore", {true, true, true, true, false}},
    {"FiveColor", {true, true, true, true, true}}
};

std::string colorToString(ColorCombination color) {
    return colorData[color].name;
};
ColorCombination stringToColor(std::string colorString) {
    if (colorString == std::string("White")) {
        return ColorCombination::WHITE;
    } else if (colorString == std::string("Blue")) {
        return ColorCombination::BLUE;
    } else if (colorString == std::string("Black")) {
        return ColorCombination::BLACK;
    } else if (colorString == std::string("Red")) {
        return ColorCombination::RED;
    } else if (colorString == std::string("Green")) {
        return ColorCombination::GREEN;
    } else if (colorString == std::string("Colorless")) {
        return ColorCombination::COLORLESS;
    } else if (colorString == std::string("Azorius")) {
        return ColorCombination::AZORIUS;
    } else if (colorString == std::string("Boros")) {
        return ColorCombination::BOROS;
    } else if (colorString == std::string("Dimir")) {
        return ColorCombination::DIMIR;
    } else if (colorString == std::string("Golgari")) {
        return ColorCombination::GOLGARI;
    } else if (colorString == std::string("Gruul")) {
        return ColorCombination::GRUUL;
    } else if (colorString == std::string("Izzet")) {
        return ColorCombination::IZZET;
    } else if (colorString == std::string("Orzhov")) {
        return ColorCombination::ORZHOV;
    } else if (colorString == std::string("Rakdos")) {
        return ColorCombination::RAKDOS;
    } else if (colorString == std::string("Selesnya")) {
        return ColorCombination::SELESNYA;
    } else if (colorString == std::string("Simic")) {
        return ColorCombination::SIMIC;
    } else if (colorString == std::string("Abzan")) {
        return ColorCombination::ABZAN;
    } else if (colorString == std::string("Bant")) {
        return ColorCombination::BANT;
    } else if (colorString == std::string("Esper")) {
        return ColorCombination::ESPER;
    } else if (colorString == std::string("Grixis")) {
        return ColorCombination::GRIXIS;
    } else if (colorString == std::string("Jeskai")) {
        return ColorCombination::JESKAI;
    } else if (colorString == std::string("Jund")) {
        return ColorCombination::JUND;
    } else if (colorString == std::string("Mardu")) {
        return ColorCombination::MARDU;
    } else if (colorString == std::string("Naya")) {
        return ColorCombination::NAYA;
    } else if (colorString == std::string("Sultai")) {
        return ColorCombination::SULTAI;
    } else if (colorString == std::string("Temur")) {
        return ColorCombination::TEMUR;
    } else if (colorString == std::string("Glint")) {
        return ColorCombination::GLINT;
    } else if (colorString == std::string("Dune")) {
        return ColorCombination::DUNE;
    } else if (colorString == std::string("Ink")) {
        return ColorCombination::INK;
    } else if (colorString == std::string("Witch")) {
        return ColorCombination::WITCH;
    } else if (colorString == std::string("Yore")) {
        return ColorCombination::YORE;
    } else if (colorString == std::string("FiveColor")) {
        return ColorCombination::FIVECOLOR;
    } else {
        // Invalid color string
        return ColorCombination::COLORLESS;
    }
};

constexpr bool hasWhite(ColorCombination color) {
    return colorData[color].colors[WHITE];
}
constexpr bool hasBlue(ColorCombination color) {
    return colorData[color].colors[BLUE];
}
constexpr bool hasBlack(ColorCombination color)  {
    return colorData[color].colors[BLACK];
}
constexpr bool hasRed(ColorCombination color) {
    return colorData[color].colors[RED];
}
constexpr bool hasGreen(ColorCombination color) {
    return colorData[color].colors[GREEN];
}

constexpr bool singleContains(bool color, bool contains) {
    return (color || !(color || contains));
}

bool contains(ColorCombination color, ColorCombination contains) {
    return singleContains(hasWhite(color), hasWhite(contains)) &&
           singleContains(hasBlue(color), hasBlue(contains)) &&
           singleContains(hasBlack(color), hasBlack(contains)) &&
           singleContains(hasRed(color), hasRed(contains)) &&
           singleContains(hasGreen(color), hasGreen(contains));
}