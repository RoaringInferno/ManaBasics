#pragma once

#ifndef MANA_HPP
#define MANA_HPP

#include <string>
#include <bitset>

enum ColorCombination {
    White,
    Blue,
    Black,
    Red,
    Green,
    Colorless,

    Azorius, //White/Blue
    Boros, //Red/White
    Dimir, //Blue/Black
    Golgari, //Black/Green
    Gruul, //Red/Green
    Izzet, //Blue/Red
    Orzhov, //White/Black
    Rakdos, //Black/Red
    Selesnya, //White/Green
    Simic, //Blue/Green
    
    Abzan, //White/Black/Green
    Bant, //White/Blue/Green
    Esper, //White/Blue/Black
    Grixis, //Blue/Black/Red
    Jeskai, //White/Blue/Red
    Jund, //Black/Red/Green
    Mardu, //White/Black/Red
    Naya, //White/Red/Green
    Sultai, //Blue/Black/Green
    Temur, //Blue/Red/Green

    
    Glint, //No White
    Dune, //No Blue
    Ink, //No Black
    Witch, //No Red
    Yore, //No Green

    FiveColor //All Colors
};

std::string colorToString(ColorCombination color);

ColorCombination stringToColor(const std::string& colorString);

constexpr bool hasWhite(ColorCombination color);
constexpr bool hasBlue(ColorCombination color);
constexpr bool hasBlack(ColorCombination color);
constexpr bool hasRed(ColorCombination color);
constexpr bool hasGreen(ColorCombination color);


std::bitset<5> getColors(ColorCombination color);

#endif