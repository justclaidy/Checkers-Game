#include "board.hpp"
Board::Board(int w, int h): width(w), height(h) {}
Board::Board(const Board& o): width(o.width), height(o.height), pieces(o.pieces) {}
void Board::init() {
    pieces.clear();
    std::cout << "Tabla inițializată (" << width << "x" << height << ")\n";
}
Board& Board::operator=(const Board& o) {
    if (this != &o) { width=o.width; height=o.height; pieces=o.pieces; }
    return *this;
}
bool Board::operator==(const Board& o) const {
    if (width != o.width || height != o.height || pieces.size() != o.pieces.size()) return false;
    for (size_t i = 0; i < pieces.size(); ++i) {
        if (pieces[i].first != o.pieces[i].first || pieces[i].second != o.pieces[i].second) return false;
    }
    return true;
}
std::istream& operator>>(std::istream& in, Board& b) {
    return in >> b.width >> b.height;
}
std::ostream& operator<<(std::ostream& out, const Board& b) {
    return out << b.width << " " << b.height;
}
