#include <stdio.h>

int main()
{
	char ch1, ch2;
	printf("문자1를 입력하시오: ");
	scanf_s("%c", &ch1, sizeof ch1);
	getchar();
	printf("문자2를 입력하시오: ");
	scanf_s("%c", &ch2, sizeof ch2);
	printf("입력된 문자: %c %c\n", ch1, ch2);
	return 0;
}
