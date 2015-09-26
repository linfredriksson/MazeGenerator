#include <iostream>
#include "maze.h"

int main()
{
	int mazeWidth = 101;
	int mazeHeight = 21;

	unsigned char *maze = new unsigned char[mazeWidth * mazeHeight];
	Maze::PrimsAlgorithm(mazeWidth, mazeHeight, maze);

	Maze::printToConsole(mazeWidth, mazeHeight, maze);

	delete[] maze;

	int a; std::cin >> a; // pause program

	return 0;
}