#include "piece.hpp"

Piece::Piece(PieceColor c, PieceType t) : color(c), type(t) {}

Piece::Piece(const Piece& other) : color(other.color), type(other.type) {}

Piece& Piece::operator=(const Piece& other) {
    color = other.color;
    type = other.type;
    return *this;
}

bool Piece::operator==(const Piece& other) const {
    return color == other.color && type == other.type;
}

std::istream& operator>>(std::istream& in, Piece& p) {
    int c, t;
    in >> c >> t;
    p.color = (PieceColor)c;
    p.type = (PieceType)t;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Piece& p) {
    out << p.color << " " << p.type;
    return out;
}
