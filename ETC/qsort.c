#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool compare(int*, int*);

int main()
{
    int arr[] = { 1, 5, 2, 4, 3 };
    qsort(arr, sizeof arr / sizeof arr[0], sizeof arr[0], compare);
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

bool compare(int* a, int* b)
{
    return *a > *b;
    // return *a < * b; -> 내림차순
}
