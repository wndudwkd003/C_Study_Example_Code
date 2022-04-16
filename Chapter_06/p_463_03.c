#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void array_fill(int*, int);
void array_print(int*, int);

int main()
{
    srand(time(NULL));
    int arr[30];
    array_fill(arr, sizeof arr / sizeof arr[0]);
    array_print(arr, sizeof arr / sizeof arr[0]);

    return 0;
}

void array_fill(int*arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}
void array_print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
