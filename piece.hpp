#pragma once

enum PieceColor { WHITE, BLACK };
enum PieceType {PAWN, QUEEN};
struct Piece { 
  PieceColor color;
  PieceType type;
};
