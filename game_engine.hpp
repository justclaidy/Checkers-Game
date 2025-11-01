#pragma once
#include "board.hpp"
#include "painter.hpp"
#include "player.hpp"
#include <memory>
#include <vector>
#include <string>

class GameEngine {
    std::unique_ptr<Board> board;
    std::unique_ptr<Painter> painter;
    std::vector<std::shared_ptr<Player>> players;
    bool gameRunning;

public:
    GameEngine();
    void Init();
    void Run();
    void AddPlayer(const std::shared_ptr<Player>& player);
};
