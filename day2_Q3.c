//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    int length,breadth,area,perimeter;
    printf("enter the lenght and breadhth\n");
    scanf("%d %d",&length,&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of rectangle is %d\n", area);
    printf("The perimeter of rectangle is %d\n", perimeter);
    
    return 0;
}