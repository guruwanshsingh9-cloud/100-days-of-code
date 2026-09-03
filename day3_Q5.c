// Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    int celsius;
    printf("Enter the celsius\n"); 
    scanf("%d" ,&celsius);
    int fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit = %d", fahrenheit);
    return 0;
    
}