#include <stdio.h>
#include <stdlib.h>
void reverse_array(int[], int);
void print_array(int[], int);

int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	print_array(arr, sizeof arr / sizeof arr[0]);
	reverse_array(arr, sizeof arr / sizeof arr[0]);
	print_array(arr, sizeof arr / sizeof arr[0]);
	
	return 0;
}

void reverse_array(int arr[], int n)
{
	int* tmp = (int*)malloc(sizeof(int)* n);
	for (int i = 0; i < n; i++)
	{
		tmp[i] = arr[n - 1 - i];
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = tmp[i];
	}
	free(tmp);
}

void print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
