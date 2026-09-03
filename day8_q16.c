//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    float num;
    float num2;
    float num3;
    printf("input the numbers to find the largest one \n");
    scanf("%f %f %f",&num ,&num2,&num3);
    if(num>num2&&num>num3)
    {
    printf("the %f is the largest",num);
    }
     if(num2>num&&num2>num3){
    printf("the %f is the largest",num2);
     }
    else{
    printf("the %f is the largest",num3);
    }

}