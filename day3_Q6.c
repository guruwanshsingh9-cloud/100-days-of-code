//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int A=6,B=3,c;
    c = A;
    A = B;
    B = c;
    printf("After swapping: A = %d, B = %d\n", A, B);
    return 0;
}