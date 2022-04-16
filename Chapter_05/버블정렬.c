#include <stdio.h>

int main()
{
    int num[6] = { 40, 30, 10, 20, 60, 50 };
    int tmp;

	printf("초기 값: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");

	for (int i = 0; i < sizeof num / sizeof num[0] - 1; i++)
	{
		for (int u = 0; u < sizeof num / sizeof num[0] - 1; u++)
		{
			if (num[u] > num[u + 1])
			{
				tmp = num[u];
				num[u] = num[u + 1];
				num[u + 1] = tmp;
			}
		}
	}

	printf("정렬 후: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
    return 0;
}
