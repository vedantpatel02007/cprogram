#include<stdio.h>
void main()
{
    int number,cube;
    printf("enter number");
    scanf("%d",&number);
    if(number<0)
    {
        number=0-number;
        printf("negative number converted into positive");
        
    }
    else(number>0);
    {
        printf("number is positive");

    }
    cube=number*number*number;
    printf("cube=%d",cube);
}