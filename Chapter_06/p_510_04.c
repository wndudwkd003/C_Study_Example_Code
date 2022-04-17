#include <stdio.h>
char change_alpa(char*);

int main()
{
    char ch = ' ';
    while (ch != '.')
    {
        printf("문자: ");
        scanf_s("%c", &ch, sizeof ch);
        getchar();
        printf(" -> %c\n", change_alpa(ch));
    }
    return 0;
}

char change_alpa(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    else
        printf("경고 - 알파벳 문자가 아님");

    return '\0';
}
