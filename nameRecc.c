#include <stdio.h>

void namerec(int n)
{
    if(n==0)
    return;
    namerec(n-1);
    printf("SANYUKTA\n");

}
int main()
{
   int n;
   printf("Enter the nuber of times to be printed\n");
   scanf("%d",&n);
   namerec(n);
   return 0;
}