//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main(){
    int month;
    printf("enter the number of the month\n");
    scanf("%d",&month);
    switch(month){
        case 1:printf("the month is january and has 31 days");
        break;
        case 2:printf("the month is february and has 28 days");
        break;
        case 3:printf("the month is march and has 31 days");
        break;
        case 4:printf("the month is april and has 30 days");
        break;
        case 5:printf("the month is may and has 31 days");
        break;
        case 6:printf("the month is june and has 30 days");
        break;
        case 7:printf("the month is july and has 31 days");
        break;
        case 8:printf("the month is august and has 31 days");
        break;
        case 9:printf("the month is september and has 30 days");
        break;
        case 10:printf("the month is october and has 31 days");
        break;
        case 11:printf("the month is november and has 30 days");
        break;
        case 12:printf("the month is december and has 31 days");
        break;
        default:printf("invalid input");

    }
}