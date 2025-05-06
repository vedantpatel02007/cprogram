/*
   write a program to find out cube of the number given by the user
   steps
   --------------------------------------------
   1-create variables number and cube
   2-accept input from the user and store it into the number variable
   3-if the number is negative 
       number=0-number
   4-if the number is positive
       number=number
   5-cube=number*number*number
   6-display on screen
*/
#include<stdio.h>
void main()
{
    int number,cube;
    printf("enter number");
    scanf("%d",%number);
    if(number<0)
    {
        number=0-number;
        printf("number was negative converted into positive");

    }
    else(number>0)
    {
        printf("number is positive");
    }
    cube=number*number*number;
    printf("cube=%d",cube);
    
}