#include<stdio.h>
int main()
{
	int a ,b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping a is %d and b is %d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("After swapping a is %d and b is %d\n",a,b);
}
