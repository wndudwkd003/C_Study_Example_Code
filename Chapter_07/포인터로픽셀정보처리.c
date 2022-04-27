#include <stdio.h>
#define S_SIZE 5

void print_image(int [S_SIZE][S_SIZE]);
void brighten_image(int [S_SIZE][S_SIZE], int);

int main()
{
	int image[S_SIZE][S_SIZE];
	for (int i = 0; i < 5; i++)
	{
		static int tmp = 0;
		for (int u = 0; u < 5; u++)
		{
			tmp += 10;
			image[i][u] = tmp;
		}
	}

	printf("======= 원본 픽셀 값 ========\n");
	print_image(image);
	printf("\n\n");

	brighten_image(image, 5);

	printf("======== 수정 후 픽셀 값 ========\n");
	print_image(image);
	printf("\n\n");
	return 0;
}

void print_image(int image[S_SIZE][S_SIZE])
{
	for (int i = 0; i < 5; i++)
	{
		for (int u = 0; u < 5; u++)
		{
			printf("%-5d", *(*(image + i)+ u));
		}
		printf("\n");
	}
}
void brighten_image(int image[S_SIZE][S_SIZE], int number)
{
	for (int i = 0; i < 5; i++)
	{
		for (int u = 0; u < 5; u++)
		{
			*(*(image + i) + u) += number;
		}
	}
}
