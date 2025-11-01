#pragma once
#include "piece.hpp"
#include <iostream>
#include <vector>

struct Board {
    int width;
    int height;
    std::vector<Piece> pieces;

    Board(int w = 8, int h = 8);
    Board(const Board& other);
    void init();

    Board& operator=(const Board& other);
    bool operator==(const Board& other) const;
};

std::istream& operator>>(std::istream& in, Board& b);
std::ostream& operator<<(std::ostream& out, const Board& b);
