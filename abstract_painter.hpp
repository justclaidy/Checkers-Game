#pragma once
#include "coord.hpp"

struct AbstractPainter {
    virtual void DrawBoard() = 0;
    virtual void WriteText() = 0;
};
