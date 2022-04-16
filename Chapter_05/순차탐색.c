#include <stdio.h>

int main()
{
    int num[6] = { 10, 20, 30, 40, 50, 60 };
    int key;
    printf("탐색할 값을 입력하시오(10 ~ 60): ");
    scanf_s("%d", &key);
    for (int i = 0; i < sizeof num / sizeof num[0]; i++)
    {
        if (key != num[i])
        {
            continue;
        }
        else
        {
            printf("탐색 성공 인덱스 = %d\n", i);
            break;
        }
    }
    return 0;
}
