#include "maze.h"

namespace Maze
{
	namespace
	{
		// helpter functions
	}

	void PrimsAlgorithm(const int sizeX, const int sizeY, unsigned char *maze)
	{
		for (int i = 0; i < sizeY; ++i)
			for (int j = 0; j < sizeX; ++j)
				maze[j + i * sizeX] = 0;
	}
};