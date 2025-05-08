/*
   write a program to find out wether the shape is portrait,landscape or square
   steps
   -------------------------------------------------------------
   1-create variable lenght,breadth;
   2-accept input from the user as lenght and breadth and store in lenght and breadth variable
   3-if lenght>breadth
     shape is portrait
   4-if lenght<breadth
     shape is landscape
   5-if lenght=breadth
     shape is square
*/
#include<stdio.h>
void main()
{
    int lenght,breadth;
    printf("enter lenght");
    scanf("%d",&lenght);
    printf("enter breadth");
    scanf("%d",&breadth);
    if(lenght>breadth)
    {
        printf("shape is portrait");

    }
    else if(lenght<breadth)
    {
        printf("shape is landscape");

    }
    else{
        printf("square");
    }

}