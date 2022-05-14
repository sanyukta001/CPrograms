#include<stdio.h>
int main()
{
	int a;
	printf("Enter the year\n");
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||(a%400==0))
	printf("Leap year");
	else
	printf("Not a leap year");
	return 0;
}	