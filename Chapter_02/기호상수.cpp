#include <stdio.h>
#include <string.h>
#define PI 3.14

int main()
{
	int radius = 5;
	float area, cir;
	//const float PI = 3.14;

	area = radius * radius * PI;
	cir = 2 * radius * PI;

	printf("반지름: %d\n", radius);
	printf("면적: %f\n", area);
	printf("둘레: %f\n", cir);

	printf("pi: %f\n", PI);

	return 0;
}
