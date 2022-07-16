#include <stdio.h>
#include <math.h>
typedef struct 
{
	int x,y;
}point;
point midpoint(point a,point b)
{
	point c;
	c.x = (a.x+b.x)/2;
	c.y = (a.y+b.y)/2;
	return c;
}
int distance(point a,point b)
{
	int d;
	int d1,d2;
	int d3;
	d1 = a.x-b.x;
	d2 = a.y-b.y;
	d3 = (d1*d1)+(d2*d2);
	d = sqrt(d3);
	return d;
}
void display(point c)
{
	printf("The x coordinate is %d and y component is %d\n",c.x,c.y);
}
int main()
{
	point a ,b, c;
	int d;
	printf("Enter the first point\n");
	scanf("%d%d",&a.x,&a.y);
	printf("Enter the second point\n");
	scanf("%d%d",&b.x,&b.y);
	c = midpoint(a,b);
	display(c);
	d = distance(a,b);
	printf("The distance is %d",d);
    
	return 0;
}