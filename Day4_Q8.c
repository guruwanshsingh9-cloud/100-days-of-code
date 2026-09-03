//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() { 
    int a=10,sum=0;
    for(int i=1;i<=a;i++)   
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is %d", a, sum);
    return 0;
}
