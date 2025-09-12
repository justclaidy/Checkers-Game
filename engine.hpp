#pragma once
#include "board.hpp"
#include "player.hpp"
#include "result.hpp"

class GameEngine {
public:
    GameEngine();
    void start();
    GameResult getGameState() const;

private:
    Board board;
    Player player1;
    Player player2;
    GameResult result;

    void switchPlayer();
    void updateResult(); 
};
