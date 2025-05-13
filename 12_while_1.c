/*
    write a program to write number from 1,2,3,4...........100 in sequence
    steps
    ------------------------------------------------------
    1-create variable number
    2-display 1 on the screen
    3- number = number + 1
    4- display number
    */
#include<stdio.h>
void main()
{
    int number=1;
    while(number<=100)
    {
        printf("%d "    , number   );
        number = number + 1;
    }
    printf("\nGOOD BYE");
    
  

    
    

}