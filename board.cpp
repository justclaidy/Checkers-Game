#include "board.hpp"

void Board::init() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if((i + j) % 2 == 1) {
                if(i < 3) grid[i][j] = 'B';
                else if(i > 4) grid[i][j] = 'W';
                else grid[i][j] = ' ';
            } else {
                grid[i][j] = '.';
            }
        }
    }
}