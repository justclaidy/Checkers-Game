#include "board.hpp"
#include "painter.hpp"

class GameEngine {
private:
    Board board;
    Painter painter;  
    bool gameRunning;
public:
    GameEngine();
    void Init();
    void Run();
};