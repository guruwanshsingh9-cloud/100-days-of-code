//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main() {
    float principal,rate,time,simple_interest,compound_interest;
    printf("Enter the principal amount: \n");
    scanf("%f", &principal);
    printf("Enter the rate of interest: \n");
    scanf("%f", &rate);
    printf("Enter the time in years: \n");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %f\n", simple_interest);

    return 0;
}