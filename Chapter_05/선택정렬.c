#include <stdio.h>

int main()
{
    int num[6] = { 40, 30, 10, 20, 60, 50 };
    int index, tmp;

    printf("초기 값: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    for (int i = 0; i < sizeof num / sizeof num[0]; i++)
    {
        index = i;
        for (int u = i + 1; u < sizeof num / sizeof num[0]; u++)
        {
            if (num[index] > num[u])
            {
                index = u;
            }
        }
        tmp = num[i];
        num[i] = num[index];
        num[index] = tmp;
    }

    printf("정렬 후: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
