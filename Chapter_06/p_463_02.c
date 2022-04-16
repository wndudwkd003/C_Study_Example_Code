#include <stdio.h>
void get_sum_diff(int, int, int*, int*);

int main()
{
    int a, b, sum, diff;
    scanf_s("%d %d", &a, &b);
    get_sum_diff(a, b, &sum, &diff);
    printf("합: %d, 차: %d\n", sum, diff);
    return 0;
}

void get_sum_diff(int x, int y, int* sum, int* diff)
{
    *sum = x + y;
    *diff = x - y;
}
