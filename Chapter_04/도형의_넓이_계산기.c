#include <stdio.h>
int menu();
float circle();
float triangle();
float retangle();

int main()
{
	switch (menu())
	{
	case 4:
	default:
		break;
	case 1:
		printf("넓이: %.2f", circle());
		break;
	case 2:
		printf("넓이: %.2f", triangle());
		break;
	case 3:
		printf("넓이: %.2f", retangle());
		break;

	}
	return 0;
}

int menu()
{
	int input;

	printf("======도형 넓이 계산기======\n");
	printf("[1] -> 원\n");
	printf("[2] -> 삼각형\n");
	printf("[3] -> 사각형\n");
	printf("[4] -> 종료\n");
	printf("===========================\n");
	printf("\n번호 입력: ");
	scanf_s("%d", &input);

	return input;
}

float circle()
{
	float r;
	printf("\n<< 원의 넓이 >>\n");
	printf("반지름을 입력하시오: ");
	scanf_s("%f", &r);
	return 3.14f * r * r;
}

float triangle()
{
	float w, h;
	printf("\n<< 삼각형의 넓이 >>\n");
	printf("밑변과 높이를 입력하시오: ");
	scanf_s("%f %f", &w, &h);
	return (w * h) / 2;
}

float retangle()
{
	float w, h;
	printf("\n<< 사각형의 넓이 >>\n");
	printf("밑변과 높이를 입력하시오: ");
	scanf_s("%f %f", &w, &h);
	return w * h;
}
