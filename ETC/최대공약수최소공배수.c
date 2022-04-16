#include <stdio.h>

int main()
{
	int arr[2], a, b, tmp;
	printf("두 수를 입력하시오: ");
	scanf_s("%d %d", &arr[0], &arr[1]);

	a = arr[0], b = arr[1];

	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	while (b % a != 0)
	{
		tmp = b % a;
		b /= a;
		a = tmp;
	}

	printf("최대공약수는 %d이고 최소공배수는 %d입니다.\n", a, (arr[0] * arr[1]) / a);

    return 0;
}
