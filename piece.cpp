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
std::string Piece::ToString() const {
    return (color == WHITE ? "Alb" : "Negru") + std::string(" ") + (type == MAN ? "Pion" : "Damă");
}
std::istream& operator>>(std::istream& in, Piece& p) {
    int c, t;
    in >> c >> t;
    if (c != WHITE && c != BLACK) throw std::invalid_argument("Culoare invalidă");
    if (t != MAN && t != QUEEN) throw std::invalid_argument("Tip invalid");
    p.color = static_cast<PieceColor>(c);
    p.type = static_cast<PieceType>(t);
    return in;
}
std::ostream& operator<<(std::ostream& out, const Piece& p) {
    out << p.color << " " << p.type;
    return out;
}
