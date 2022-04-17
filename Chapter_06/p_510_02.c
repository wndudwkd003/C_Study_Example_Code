#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void string_del_space(char*, int);

int main()
{
    char string[5000];

    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets_s(string, 4999);   // 문자열 입력받음
    string_del_space(string, strlen(string));

    printf("\n%s\n", string);
    return 0;
}

void string_del_space(char* str, int size)
{
    char* tmp_str = (char*)malloc(sizeof(char) * size); // str문자열과 동일한 크기의 문자열을 동적할당
    int index = 0;  // 동적할당한 문자열에 순서대로 문자를 넣기 위한 인덱스

    for (int i = 0; i <= size; i++)
    {
        if (str[i] != ' ' || str[i] == '\0')
        {
            tmp_str[index++] = str[i];  // 공백이 아니거나 널문자일 때 복사
        }
        str[i] = '\0';  // 원래 문자열은 전부 널문자로 채워넣음
    }
    for (int i = 0; i <= size; i++)
    {
        str[i] = tmp_str[i];    // 동작 할당 문자열에서 원래 문자열로 복사
    }

    free(tmp_str);  // 동적 할당한 문자열을 메모리에서 제거
}
