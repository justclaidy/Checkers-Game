#pragma once
#include <iostream>
#include "piece.hpp"

struct Player {
    int score;
    PieceColor color;

    Player(int s = 0, PieceColor c = WHITE);
    Player(const Player& other);

    Player& operator=(const Player& other);
    bool operator==(const Player& other) const;
};

std::istream& operator>>(std::istream& in, Player& p);
std::ostream& operator<<(std::ostream& out, const Player& p);
