#include <stdio.h>
int sum_array(int*, int);

int main()
{
    int n[] = { 1, 2, 3, 4, 5 };
    printf("배열의 합: %d\n", sum_array(n, sizeof n / sizeof n[0]));
}

int sum_array(int* arr, int i)
{
    int sum = 0;
    for (int u = 0; u < i; u++)
    {
        sum += arr[u];
    }
    return sum;
}
