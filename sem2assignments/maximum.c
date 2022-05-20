#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	int z = (a<b)?((b<c)?c:b):((a<c)?c:a);
	printf("The greatest number is %d\n",z);
}
