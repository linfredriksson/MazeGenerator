#include <iostream>
#include "maze.h"

int main()
{
	int mazeWidth = 101;
	int mazeHeight = 21;

	unsigned char *maze = new unsigned char[mazeWidth * mazeHeight];
	Maze::PrimsAlgorithm(mazeWidth, mazeHeight, maze);

	for (int y = 0; y < mazeHeight; ++y)
	{
		for (int x = 0; x < mazeWidth; ++x)
		{
			maze[x + y * mazeWidth] ? printf("#") : printf(" ");
		}
		printf("\n");
	}

	delete[] maze;

	int a; std::cin >> a; // pause program

	return 0;
}