#include "coord.hpp"

Coord::Coord(int _x, int _y) : x(_x), y(_y) {}

Coord::Coord(const Coord& other) : x(other.x), y(other.y) {}

Coord& Coord::operator=(const Coord& other) {
    x = other.x;
    y = other.y;
    return *this;
}

bool Coord::operator==(const Coord& other) const {
    return x == other.x && y == other.y;
}

std::istream& operator>>(std::istream& in, Coord& c) {
    in >> c.x >> c.y;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Coord& c) {
    out << c.x << " " << c.y;
    return out;
}
