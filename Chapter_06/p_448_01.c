#include <stdio.h>
#define SIZE 5

void print_image(int[][SIZE]);
void bright_image(int[][SIZE]);

int main()
{
	int image[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		for (int u = 0; u < SIZE; u++)
		{
			image[i][u] = (u + 1) * 10;
		}
	}

	print_image(image);
	bright_image(image);
	print_image(image);
    return 0;
}

void print_image(int image[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int u = 0; u < SIZE; u++)
		{
			printf("%3d", image[i][u]);
		}
		printf("\n");
	}
	printf("\n");
}

void bright_image(int image[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int u = 0; u < SIZE; u++)
		{
			image[i][u] += 10;
		}
	}
}
