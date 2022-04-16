#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sort_selection(int*, int);
void sort_bubble(int*, int);
int search_binary(int*, int, int);
int search_sequ(int*, int, int);
bool compare(int*, int*);
int main()
{
    int a[] = { 1000, 300, 500, 400, 700, 200, 600, 800, 900, 100 };
    //sort_selection(a, sizeof a / sizeof a[0]);
    //sort_bubble(a, sizeof a / sizeof a[0]);
    //qsort(a, sizeof a / sizeof a[0], sizeof a[0], compare);

    printf("인덱스: %d\n", search_sequ(a, sizeof a / sizeof a[0], 200));
    return 0;
}

void sort_selection(int* arr , int size)
{
    int min_index, tmp;
    for (int i = 0; i < size; i++)
    {
        min_index = i;
        for (int u = i + 1; u < size; u++)
        {
            if (arr[min_index] > arr[u])
            {
                min_index = u;
            }
        }
        tmp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = tmp;
    }
}

void sort_bubble(int* arr, int size)
{
    int tmp;
    for (int i = 0; i < size - 1; i++)
    {
        for(int u=0; u<size - 1; u++)
        {
            if (arr[u] > arr[u + 1])
            {
                tmp = arr[u];
                arr[u] = arr[u + 1];
                arr[u + 1] = tmp;
            }
        }
    }
}

int search_binary(int* arr, int size, int key)
{
    int start = 0, end = size - 1, mid = (start + end) / 2;
    while (key != arr[mid])
    {
        mid = (start + end) / 2;
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return mid;
}

bool compare(int*a, int*b)
{
    return *a > *b;
}

int search_sequ(int* arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}
