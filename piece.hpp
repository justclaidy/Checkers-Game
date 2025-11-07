#pragma once
#include <iostream>
#include <string>
enum PieceColor { WHITE, BLACK };
enum PieceType { MAN, QUEEN };
struct Piece {
    PieceColor color;
    PieceType type;
    Piece(PieceColor c = WHITE, PieceType t = MAN);
    Piece(const Piece& other);
    Piece& operator=(const Piece& other);
    bool operator==(const Piece& other) const;
    std::string ToString() const; 
};
std::istream& operator>>(std::istream& in, Piece& p);
std::ostream& operator<<(std::ostream& out, const Piece& p);
