// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius,area,circumference;
    printf("enter the radius\n");
    scanf("%f",&radius);
    area = 3.14* radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("The area of the circle is: %f\n", area);
    printf("The circumference of the circle is: %f\n", circumference);
    return 0;
}