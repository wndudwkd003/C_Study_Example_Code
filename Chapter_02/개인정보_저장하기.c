#include <stdio.h>

int main()
{
	char name[10];
	int age;
	char gender;
	float tall;

	printf("이름을 입력하시오: ");
	scanf_s("%s", &name, sizeof name / sizeof name[0]);
	getchar();
	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);
	getchar();
	printf("성별을 입력하시오: ");
	scanf_s("%c", &gender, sizeof gender);
	printf("키를 입력하시오: ");
	scanf_s("%f", &tall);

	printf("나의 이름은 %s입니다.\n", name);
	printf("나의 나이는 %d입니다.\n", age);
	printf("나의 성별은 %c입니다.\n", gender);
	printf("나의 키는 %f입니다.\n", tall);
	return 0;
}
