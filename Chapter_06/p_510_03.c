#include <stdio.h>
#include <conio.h>
#include <string.h>
int str_chr(char*, int);

int main()
{
    char string[1000];
    int c=0;

    printf("문자열을 입력하시오: ");
    gets_s(string, 999);

    printf("%d\n", str_chr(string, c));
    return 0;
}

int str_chr(char* s, int c)
{
    char key;
    printf("개수를 셀 문자를 입력하시오: ");
    scanf_s("%c", &key, sizeof key);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == key)
        {
            c++;
        }
    }
    printf("%c의 개수: ", key);

    return c;
}
