#pragma once
#include <iostream>

struct Coord {
    int x, y;
    Coord(int x = 0, int y = 0);
    Coord(const Coord& c);
    Coord& operator=(const Coord& c);
    bool operator==(const Coord& c) const;
};

std::istream& operator>>(std::istream& in, Coord& c);
std::ostream& operator<<(std::ostream& out, const Coord& c);