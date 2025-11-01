#pragma once
#include "abstract_painter.hpp"
#include <iostream>

class Painter : public AbstractPainter {
public:
    void DrawBoard() override;
    void WriteText() override;
};
