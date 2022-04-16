#include <stdio.h>

int main()
{
	int num[6] = { 10, 20, 30, 40, 50, 60 };
	int key, length;
	int start, end, mid;

	length = sizeof num / sizeof num[0];
	start = 0, end = length - 1;
	mid = (start + end) / 2;

	printf("탐색할 값을 입력하시오(10 ~ 60): ");
	scanf_s("%d", &key);

	while (key != num[mid])
	{
		mid = (start + end) / 2;
		if (key > num[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	printf("탐색 성공 인덱스 = %d\n", mid);

    return 0;
}
