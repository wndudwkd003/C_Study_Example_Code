#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
	int no;
	char name[10];
} Member;

void printView(Member*, int);
void no_sort(Member*, int);
void name_sort(Member*, int);

int main()
{
	Member m[3] = {
		{2, "kim"},
		{3, "jeong"},
		{1, "break"}
	};
	int i = sizeof(m) / sizeof(m[0]);

	puts("before\n");
	printView(m, i);
	puts("\nno_sort\n");
	no_sort(m, i);
	printView(m, i);
	puts("\nname_sort\n");
	name_sort(m, i);
	printView(m, i);
	return 0;
}

void printView(Member* m, int i)
{
	for (int u = 0; u < i; u++) {
		printf("%d %s\n", (m + u)->no, (m + u)->name);
	}
}
void no_sort(Member* m, int i)
{
	Member tmp;
	for (int u = 0; u < i - 1; u++) {
		for (int j = 0; j < i - 1; j++) {
			if ((m + j)->no > (m + j + 1)->no) {
				tmp = *(m + j);
				*(m + j) = *(m + j + 1);
				*(m + j + 1) = tmp;
			}
		}
	}
}
void name_sort(Member* m, int i)
{
	Member tmp;
	for (int u = 0; u < i - 1; u++) {
		for (int j = 0; j < i - 1; j++) {
			if (strcmp((m + j)->name, (m + j + 1)->name) > 0) {
				tmp = *(m + j);
				*(m + j) = *(m + j + 1);
				*(m + j + 1) = tmp;
			}
		}
	}
}
