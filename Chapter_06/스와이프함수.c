#include <stdio.h>
void swap_point(int*, int*);
int main()
{
    int a = 50;
    int b = 100;
    swap_point(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void swap_point(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
