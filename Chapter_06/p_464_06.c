#include <stdio.h>
void array_print(int*, int);
void array_copy(int*, int*, int);
int main()
{
    int array_a[] = { 5, 3, 4, 2, 1 };
    int array_b[5];

    array_copy(array_a, array_b, sizeof array_a / sizeof array_b[0]);
    array_print(array_b, 5);
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

void array_copy(int* arr1, int* arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
}
