#pragma once

class Board {
    static constexpr int MAX_X = 80;
    static constexpr int MAX_Y = 25;
    const char* originalBoard[MAX_Y] = {
        // 01234567890123456789012345678901234567890123456789012345678901234567890123456789
          "                                                                                ",
          "                                       &                   $                    ",
          "================================================    ============                ",
          "                                                        H                       ",
          "                                                        H                       ",
          "                    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<",
          "                           H                                                    ",
          "                           H                                                    ",
          ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>          ",
          "                                              H                                 ",
          "                                              H                                 ",
          "                   =============================================================",
          "                                H                                               ",
          "                                H                                               ",
          ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                     ",
          "                                                     H                          ",
          "                                                     H                          ",
          "                    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<",
          "                                    H                                           ",
          "                                    H                                           ",
          ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                     ",
          "                                          H                                     ",
          "      @                                   H                                     ",
          "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ",
          "                                                                                "
    };
    char currentBoard[MAX_Y][MAX_X + 1]; // +1 for null terminator
public:
    void reset();
    void print() const;
    char getChar(int x, int y) const {
        return currentBoard[y][x];
    }
};

