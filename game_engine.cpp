#include "game_engine.hpp"
#include "board.hpp"
#include <iostream>

GameEngine::GameEngine() : gameRunning(false) {}

void GameEngine::Init() {
    board.init();
    gameRunning = true;
    std::cout << "Jocul de Dame a fost initializat!\n";
}

void GameEngine::Run() {
    while(gameRunning) {
        painter.DrawBoard();
        gameRunning = false;
    }
}