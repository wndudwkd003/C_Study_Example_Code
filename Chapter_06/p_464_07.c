#include <stdio.h>
void array_print(int*, int);
void array_sum(int*, int*, int*, int);
int main()
{
    int a[] = { 1000, 980, 800, 1200, 1100 };
    int b[] = { 300, 200, 180, 310, 300 };
    int c[5];

    array_sum(a, b, c, 5);
    array_print(c, 5);
    return 0;
}

void array_print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void array_sum(int* arr1, int* arr2, int* arr3, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}
