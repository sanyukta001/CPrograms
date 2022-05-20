//calculator using switch case
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("Enter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for division\n");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case '+':printf("The sum is ");
		        int c = a+b;
			printf("%d",c);
			break;
		case '-':printf("The subtraction is ");
		         int m = abs(a-b);
	                 printf("%d",m);
			 break;
		case '*':printf("The multiplication is ");
		         int mul = a*b;
		         printf("%d",mul);
		         break;
		case '/':printf("The division is ");
		         int div = a/b;
		         printf("%d",div);
		         break;
		default:printf("INVALID INPUT\n");
	}
}