#include "board.hpp"


Board::Board(int w, int h) : width(w), height(h) {}

Board::Board(const Board& other) : width(other.width), height(other.height) {}

void Board::init() {
    std::cout << "Tabla a fost inițializată (" << width << "x" << height << ")\n";
}

Board& Board::operator=(const Board& other) {
    width = other.width;
    height = other.height;
    return *this;
}

bool Board::operator==(const Board& other) const {
    return width == other.width && height == other.height;
}

std::istream& operator>>(std::istream& in, Board& b) {
    in >> b.width >> b.height;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Board& b) {
    out << b.width << " " << b.height;
    return out;
}
