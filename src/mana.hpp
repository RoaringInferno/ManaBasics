#pragma once

#ifndef MANA_HPP
#define MANA_HPP

#include <string>

enum ColorCombination
{
    WHITE,
    BLUE,
    BLACK,
    RED,
    GREEN,
    COLORLESS,

    AZORIUS, //White/Blue
    BOROS, //Red/White
    DIMIR, //Blue/Black
    GOLGARI, //Black/Green
    GRUUL, //Red/Green
    IZZET, //Blue/Red
    ORZHOV, //White/Black
    RAKDOS, //Black/Red
    SELESNYA, //White/Green
    SIMIC, //Blue/Green
    
    ABZAN, //White/Black/Green
    BANT, //White/Blue/Green
    ESPER, //White/Blue/Black
    GRIXIS, //Blue/Black/Red
    JESKAI, //White/Blue/Red
    JUND, //Black/Red/Green
    MARDU, //White/Black/Red
    NAYA, //White/Red/Green
    SULTAI, //Blue/Black/Green
    TEMUR, //Blue/Red/Green

    
    GLINT, //No White
    DUNE, //No Blue
    INK, //No Black
    WITCH, //No Red
    YORE, //No Green

    FIVECOLOR //All Colors
};

bool contains(ColorCombination color, ColorCombination contains);

constexpr bool hasWhite(const ColorCombination color);
constexpr bool hasBlue(const ColorCombination color);
constexpr bool hasBlack(const ColorCombination color);
constexpr bool hasRed(const ColorCombination color);
constexpr bool hasGreen(const ColorCombination color);   

std::string colorToString(const ColorCombination color);
ColorCombination stringToColor(std::string colorString);

#endif