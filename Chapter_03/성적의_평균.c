#include <stdio.h>
int main()
{
	int n = 0;
	double avg = 0.0, score = 0.0, sum = 0.0;
	printf("***종료 시 음수 입력***\n");
	while (1)
	{
		printf("성적을 입력하시오: ");
		scanf_s("%lf", &score);
		if (score < 0.0)
		{
			break;
		}
		else
		{
			sum += score;
			n++;
		}
	}

	avg = sum / n;
	printf("성적의 평균은 %.1f입니다.\n", avg);

	return 0;
}
