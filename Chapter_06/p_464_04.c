#include <stdio.h>
void array_print(int*, int);

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    array_print(arr, sizeof arr / sizeof arr[0]);

    return 0;
}

void array_print(int* arr, int n)
{
    printf("arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}
