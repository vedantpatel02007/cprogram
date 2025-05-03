/*
write a program to findout whether given year is millennium year or not. using simple decision making statements. using simple decision making statements.
steps
-----------------------------------------------------------------
1-create variable year
2-accept value from user and store it into year variable
3-if year/1000=int
then it is millenial
*/
#include<stdio.h>
void main()
{
    int year;
    
   
    printf("enter year");
    scanf("%d",&year);

    if(year%1000==0)
    {
        printf("it is millenial year");
    }

    if(year%1000!=0)
    {
        printf("not millenial year");
    }
    printf("\n GOOD BYE");
}