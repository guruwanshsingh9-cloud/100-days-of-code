//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int A=6;
    int B=3;
    int sum,difference,product,quotient;
    sum = A + B;
    difference = A - B;
    product = A * B;
    quotient = A / B;
    printf("The sum of two numbers is %d\n", sum);
    printf("The difference of two numbers is %d\n", difference);
    printf("The product of two numbers is %d\n", product);
    printf("The quotient of two numbers is %d\n", quotient);
    return 0;
}