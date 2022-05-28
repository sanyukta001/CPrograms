#include <stdio.h>
#include <stdlib.h>

int* getnext(int *a, int k)
{
	int* ar = (int*)malloc((k + 1) * sizeof(int));
	ar[0] = 1;
	ar[k] = 1;
	for (int i = 1; i < k; i++)
	{
		ar[i] = a[i-1] + a[i];
	}
	return ar;
}
int main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	int* a1 = (int*)malloc(1 * sizeof(int));
	int* a2 = (int*)malloc(2 * sizeof(int));
	a1[0] = 1;
	a2[0] = 1, a2[1] = 1;
	if (n == 1 || n>1)
	{
		printf("The pascal triangle is:\n");
		for (int i = n; i >= 1; i--)
		{
			printf(" ");
		}
		printf("%d\n", a1[0]);
	}
	if (n == 2 || n>1)
	{
		for (int i = n; i >= 2; i--)
		{
			printf(" ");
		}
		printf("%d ", a2[0]);
		printf("%d\n", a2[1]);
	}
	if (n >= 3)
	{
		int* arr = (int*)malloc(n * sizeof(int));
		arr = a2;
		for (int i = 2; i < n; i++)
		{
			int* ar = (int*)malloc((i + 1) * sizeof(int));
			ar = getnext(arr, i);
			for (int j = 1; j <= n-i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < i+1; j++)
			{
				printf("%d ", ar[j]);
			}
			printf("\n");
			arr = ar;
		}
	}
	return 0;
}
