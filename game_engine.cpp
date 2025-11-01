#include "game_engine.hpp"
#include <iostream>
#include <algorithm>

GameEngine::GameEngine() 
    : board(std::make_unique<Board>(8, 8)),
      painter(std::make_unique<Painter>()),
      gameRunning(false) {}

void GameEngine::Init() {
    board->init();
    gameRunning = true;
    std::cout << "Jocul de Dame a fost inițializat!\n";

    // exemplu: adăugăm 2 jucători
    AddPlayer(std::make_shared<Player>(0, WHITE));
    AddPlayer(std::make_shared<Player>(0, BLACK));
}

void GameEngine::Run() {
    while (gameRunning) {
        painter->DrawBoard();
        std::cout << "Joc în desfășurare între " << players.size() << " jucători.\n";

        std::sort(players.begin(), players.end(),
                  [](const std::shared_ptr<Player>& a, const std::shared_ptr<Player>& b) {
                      return a->score > b->score;
                  });

        std::cout << "Jucătorii au fost sortați după scor.\n";
        gameRunning = false; 
    }
}

void GameEngine::AddPlayer(const std::shared_ptr<Player>& player) {
    players.push_back(player);
}
