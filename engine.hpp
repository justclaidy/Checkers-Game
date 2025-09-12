#pragma once
#include "board.hpp"
#include "player.hpp"
#include "result.hpp"

class GameEngine {
public:
    GameEngine();
    void start();
    GameResult getGameState() const;

    void switchPlayer();
    void updateResult(); 
};
