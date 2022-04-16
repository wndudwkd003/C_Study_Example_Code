#include <stdio.h>
int change_speed(int);

int main()
{
	int input, speed;

	while (1)
	{
		printf("속도를 입력하시오: ");
		scanf_s("%d", &input);
		speed = change_speed(input);
		if (speed <= 0 )
		{
			printf("정지 되었습니다.\n");
			break;
		}
		printf("현재 속도는 %dkm/h입니다.\n", speed);
	}
}

int change_speed(int i)
{
	static int speed = 0;
	speed += i;
	return speed;
}
