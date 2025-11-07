#include "player.hpp"

Player::Player(int s, PieceColor c, const std::string& n) : name(n), score(s), color(c) {}
Player::Player(const Player& other) : name(other.name), score(other.score), color(other.color) {}

Player& Player::operator=(const Player& other) {
    name = other.name;
    score = other.score;
    color = other.color;
    return *this;
}

bool Player::operator==(const Player& other) const {
    return score == other.score && color == other.color && name == other.name;
}

std::istream& operator>>(std::istream& in, Player& p) {
    in >> p.name >> p.score;
    int c; in >> c;
    p.color = static_cast<PieceColor>(c);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& p) {
    out << p.name << " (" << (p.color == WHITE ? "Alb" : "Negru") << "), scor: " << p.score;
    return out;
}
