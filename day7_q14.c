//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char a;
    printf("enter the character to check wheather it is a vowel or not \n");
    scanf("%c",&a);
    if(a=='a' || a== 'e' || a=='i' || a=='o' || a== 'u')
    {
        printf("vovel");

    }else
    {printf("consonant");
    }

}