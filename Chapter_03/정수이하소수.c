#include <stdio.h>
int main()
{
	int input, count = 0;
	printf("정수 하나를 입력하세요: ");
	scanf_s("%d", &input);
	for (int i = 2; i <= input; i++)
	{
		for (int u = 1; u <= i; u++)
		{
			if (i % u == 0) count++;
			if (count > 2)
			{
				break;
			}
		}
		if (count == 2)
		{
			printf("%d ", i);
		}
		count = 0;
	}
	printf("\n");
	return 0;
}
