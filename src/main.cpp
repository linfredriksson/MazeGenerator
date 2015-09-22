#include <iostream>
#include "maze.h"

int main()
{
	int width = 4;
	int height = 3;
	unsigned char maze[] = {
		0, 0, 0, 0,
		1, 0, 1, 0,
		1, 0, 0, 0
	};

	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			maze[x + y * width] ? printf("1") : printf("0");
		}
		printf("\n");
	}

	int a; std::cin >> a; // pause program

	return 0;
}