#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

void encrypt(char[], int, int);
void decod(char[], int);

int main()
{
	char str[100];
	int shift;
	int input;
	char buff;
	printf("1. 문자열 암호화\n");
	printf("2. 문자열 해독\n");
	printf("\n선택: ");
	scanf_s("%d", &input);
	system("cls");
	buff = getchar();

	switch (input)
	{
	case 1:
		printf("문자열을 입력하시오: ");
		gets_s(str, 100);

		printf("\n옮길 횟수를 입력하시오.\n(왼쪽으로 옮기려면 '26-횟수'를 입력하면 됩니다.)\n: ");
		scanf_s("%d", &shift);

		encrypt(str, shift, (int)strlen(str));

		printf("\n암호화된 문자열: %s\n\n", str);
		break;
	case 2:
		printf("문자열을 입력하시오: ");
		gets_s(str, 100);
		printf("\n");
		decod(str, (int)strlen(str));
		break;
	default:
		break;
	}
}

void encrypt(char str[], int shift, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			continue;
		}
		else
		{
			for (int u = 0; u < shift; u++)
			{
				if (str[i] == 'z')
				{
					str[i] = 'a';
					continue;
				}
				else if (str[i] == 'Z')
				{
					str[i] = 'A';
					continue;
				}
				else
				{
					str[i] += 1;
					continue;
				}
			}
		}
	}
}

void decod(char str[], int size)
{
	for (int z = 0; z < 26; z++)
	{
		for (int i = 0; i < size; i++)
		{
			if (str[i] == ' ' || str[i] == '\0')
			{
				continue;
			}
			else
			{
				for (int u = 0; u < z; u++)
				{
					if (str[i] == 'z')
					{
						str[i] = 'a';
						continue;
					}
					else if (str[i] == 'Z')
					{
						str[i] = 'A';
						continue;
					}
					else
					{
						str[i] += 1;
						continue;
					}
				}
			}
		}
		printf("%s\n", str);
	}
	printf("\n");
}
