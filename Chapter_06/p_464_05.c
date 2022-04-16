#include <stdio.h>
void convert(double*, double*, int);
void array_print(double*, int);

int main()
{
    double grades[] = { 1.1, 2.5, 3.4, 4.3, 4.1, 4.0, 4.0, 3.5, 3.7, 3.8 };
    double score[10];
    convert(grades, score, 10);
    array_print(score, 10);
    return 0;
}

void convert(double* grades, double* scores, int size)
{
    for (int i = 0; i < size; i++)
    {
        scores[i] = ((100) * (grades[i])) / (4.3);
    }
}

void array_print(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2f\n", arr[i]);
    }
}
