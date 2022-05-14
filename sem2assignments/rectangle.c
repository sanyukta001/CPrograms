//Find out the area and perimeter of a rectangle
#include <stdio.h>

int main()
{
    float length,breadth;
    float area, perimeter;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f%f",&length,&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area is %.2f and the perimeter is %.2f",area,perimeter);

    return 0;
}