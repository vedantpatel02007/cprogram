/*
     write a program to convert 24 hours format time in 12 hours format time and display display it 
    steps
    -------------------------------------------------
    1-create variable hours
    2-accept hours in 24 hours format from the user and store in hour variable
    3-if hours<12
        hours=hours AM

    4-if hours>11
    hours=(hours-12) PM

    5- diplay hours
    6-good bye

*/
#include<stdio.h>
void main()
{
    float hours;
    printf("enter hours in 24 hours format");
    scanf("%f",&hours);

    if(hours<12)
    {
        printf("\n%.2fAM",hours);

    }

    if(hours>11)
    {
        hours=hours-12;
        printf("\n%.2fPM",hours);


    }
    printf("\ngood bye");


}