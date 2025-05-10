/*
   write a program to find out which day in the basis of the number given by the user
   steps
   --------------------------------------------------------
   1-create variables
   2-accept input
   3-swutch statement
   4-display on screen
*/
#include<stdio.h>
void main()
{
    int number;
    printf("enter the number ");
    scanf("%d",&number);

    switch(number)
    {
        case 1:
        printf("the day is sunday");
        break;

        case 2:
        printf("the day is monday");
        break;

        case 3:
        printf("the day is tuesday");
        break;

        case 4:
        printf("the day is wednesday");
        break;

        case 5:
        printf("the day is thursday");
        break;

        case 6:
        printf("the day is friday");
        break;

        case 7:
        printf("the day is saturday");
        break;

        default:
        printf("the day is invalid");
        break;
    }
}