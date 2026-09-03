//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char ch;
    printf("enter the character to check\n");
    scanf("%c",&ch);
    if(ch >= 'a'&&ch <='z')
    {
        printf("the alphabet %c is a lowercase",ch);
    }
    else if(ch>='A' && ch <='Z')
    {
        printf("the alphabet %c is a uppercase",ch);
    }
    else if(ch >='0' && ch<='9')
    {
        printf("the alphabet %c is a digit",ch);
    }
    else{
        printf("the alphabet %c is a special character",ch);
    }
return 0;
}