#include <stdio.h>

int main()
{
    char* name[3] = { "비행기", "스마트폰", "컴" };
    int score[3][4] = { {90, 85, 75, }, {65, 75, 88}, {100, 88, 95} };
    double av[3];
    char grade[3];

    for (int i = 0; i < 3; i++)
    {
        for (int u = 0; u < 3; u++)
        {
            score[i][3] += score[i][u]; 
        }

        av[i] = score[i][3] / 3.0f; 

        if (av[i] >= 90)
            grade[i] = 'A';
        else if (av[i] >= 80)
            grade[i] = 'B';
        else if (av[i] >= 70)
            grade[i] = 'C';
        else if (av[i] >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';

        printf("%-10s%4d%4d%4d%6d%8.2f%4c\n", name[i], score[i][0], score[i][1], score[i][2], score[i][3], av[i], grade[i]);

    }
    return 0;
}
