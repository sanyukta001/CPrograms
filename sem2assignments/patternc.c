#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i = 1; i <= n; i+=2)
	{
		for(j = 1; j <= i; j+=2)
		{
			printf("  ");
		}
		for(j = n; j >= i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i = 3; i <= n; i+=2)
	{
		for(j = n; j >= i; j-=2)
		{
			printf("  ");
		}
		for(j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
