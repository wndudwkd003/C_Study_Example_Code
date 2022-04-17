#include <stdio.h>
#include <conio.h>

void str_upper(char*);

int main()
{
    char string[1000];

    printf("문자열을 입력하시오: ");
    gets_s(string, 999);
    str_upper(string);
    printf("변환된 문자열: %s\n", string);
    return 0;
}

void str_upper(char* str)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}
