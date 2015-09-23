#include "maze.h"
#include <stdlib.h>

#include <iostream>

namespace Maze
{
	namespace
	{
		// helpter functions
		void PrimsAlgorithmStep(int x, int y, int directionX, int directionY, unsigned char *maze)
		{
		}
	}

	void PrimsAlgorithm(const int sizeX, const int sizeY, unsigned char *maze)
	{
		Fill(sizeX, sizeY, 1, maze);

		PrimsAlgorithmStep(1, 1, 0, 0, maze);
	}

	void Random(const int sizeX, const int sizeY, const float fillRate, unsigned char *maze)
	{
		for (int i = 0; i < sizeX * sizeY; ++i)
			maze[i] = (rand() % 1000 * 0.001 < fillRate) ? 1 : 0;
	}

	void Fill(const int sizeX, const int sizeY, const int value, unsigned char *maze)
	{
		for (int i = 0; i < sizeX * sizeY; ++i)
			maze[i] = value;
	}
};