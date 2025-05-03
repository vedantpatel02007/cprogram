 /*
 write a program to findout wether thye shape is portrait landscape or square on the basis of given lenght and breadth
steps
----------------------------------------
1- create variables lenght and breadth
2- accept lenght and breadth from the user and store it in lenght and breadth variables
3- if lenght>breadth
    shape is portrait
    if lenght<breadth
    shape is landscape
    if lenght=breadth
    shape is square
4- display good bye
*/
#include<stdio.h>
void main()
{
    int lenght,breadth;
    printf("enter the value of lenght");
    scanf("%d",&lenght);
    printf("enter the value of breadth");
    scanf("%d",&breadth);

    if(lenght>breadth)
    {
        printf("shape is portrait");
    }

    if(lenght<breadth)
    {
        printf("shape is landscape");
    }

    if (lenght==breadth)
    {
        printf("shape is square");
    }

    printf("\nGOOD BYE");
}

 