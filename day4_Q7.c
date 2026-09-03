//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int A=9,B=7;
    A = A + B;
    B = A - B;
    A = A - B; 
    printf("After swapping: A = %d, B = %d\n", A, B);
    return 0;
}
