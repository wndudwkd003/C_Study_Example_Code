#include <stdio.h>
int array_total(int*, int);

int main()
{
    int a[] = { 1000, 980, 800, 1200, 1100 };

    printf("총액: %d\n", array_total(a, 5));
    return 0;
}

int array_total(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
