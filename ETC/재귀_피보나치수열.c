#include <stdio.h>
void fibo(int i)
{
	static int a = 1, b = 1, c = 2, count = 0;
	printf("%d ", a);
	a = b;
	b = c;
	c = a + b;
	count++;
	if (count != i) fibo(i);
}
int main()
{
	fibo(7);

    return 0;
}
