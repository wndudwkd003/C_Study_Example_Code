#include <stdio.h>
void get_lcm_gcd(int, int, int*, int*);

int main()
{
	int x, y, lcm = 0, gcd = 0;
	printf("두 수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	get_lcm_gcd(x, y, &lcm, &gcd);
	printf("\n최대 공약수: %d\n최소 공배수: %d\n", gcd, lcm);
	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int*p_gcd)
{
	int a = x, b = y, tmp;
	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b % a != 0)
	{
		tmp = b % a;
		b = b / a;
		a = tmp;
	}
	*p_gcd = a;
	*p_lcm = (x * y) / a;
}
