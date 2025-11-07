#pragma once
#include "piece.hpp"
#include <iostream>
#include <string>

struct Player {
    std::string name;
    int score;
    PieceColor color;

    Player(int s = 0, PieceColor c = WHITE, const std::string& n = "Anonim");
    Player(const Player& other);

    Player& operator=(const Player& other);
    bool operator==(const Player& other) const;
};

std::istream& operator>>(std::istream& in, Player& p);
std::ostream& operator<<(std::ostream& out, const Player& p);
