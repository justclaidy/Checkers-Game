#pragma once
#include <iostream>

struct Coord {
    int x;
    int y;

    Coord(int _x = 0, int _y = 0);
    Coord(const Coord& other);
    Coord& operator=(const Coord& other);
    bool operator==(const Coord& other) const;
};

std::istream& operator>>(std::istream& in, Coord& c);
std::ostream& operator<<(std::ostream& out, const Coord& c);
