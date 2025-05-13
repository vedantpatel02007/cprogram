/*
   1) 100 98 96 94 .... 0
   steps
   --------------------------------
   1-create variable number
   2-display 100
   3-number = number - 2
   4-display number
*/
#include<stdio.h>
void main()
{
    int number=100;
    while(number>=0)
    {
         printf("%d ",number);
        number = number - 2;
    }
 
 

 
    printf("\nGOOD BYE");
}