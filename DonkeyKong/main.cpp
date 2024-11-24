#include <iostream>
#include <windows.h>
#include <conio.h>

#include "Board.h"

// Better put this is a proper class
constexpr int ESC = 27;

int main() {
	Board board;
	board.reset();
	board.print();

}
