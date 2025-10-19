#include "player.hpp"

Player::Player(int s, PieceColor c) : score(s), color(c) {}

Player::Player(const Player& other) : score(other.score), color(other.color) {}

Player& Player::operator=(const Player& other) {
    score = other.score;
    color = other.color;
    return *this;
}

bool Player::operator==(const Player& other) const {
    return score == other.score && color == other.color;
}

std::istream& operator>>(std::istream& in, Player& p) {
    in >> p.score >> (int&)p.color;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& p) {
    out << p.score << " " << p.color;
    return out;
}
