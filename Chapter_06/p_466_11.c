#include <stdio.h>
void array_sum_sort(int*, int*, int*, int);
void array_print(int*, int);

int main()
{
    int a[] = { 1, 3, 4, 2, 8, 5, 6, 7, 10, 9 };
    int b[] = { 15, 11, 13, 20, 17, 12, 16, 14, 18, 19 };
    int c[20];
    array_sum_sort(a, b, c, 10);
    array_print(c, 20);
    return 0;
}

void array_sum_sort(int* arr1, int* arr2, int* arr3, int size)
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i];
        arr3[size + i] = arr2[i];
    }
    for (int i = 0; i < size * 2 - 1; i++)
    {
        for (int u = 0; u < size * 2 - 1; u++)
        {
            if (arr3[u] > arr3[u + 1])
            {
                tmp = arr3[u];
                arr3[u] = arr3[u + 1];
                arr3[u + 1] = tmp;
            }
        }
    }
}

void array_print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
