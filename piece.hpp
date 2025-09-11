#pragma once

enum class PieceType { MAN, KING };

struct Piece {
    PieceType type;
    Player owner;

    Piece(Player p, PieceType t = PieceType::MAN)
        : owner(p), type(t) {}
};
