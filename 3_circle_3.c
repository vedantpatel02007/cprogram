/*
   write a program to find out larger circle from the two circles on the basis if the radius given by the user
   steps
   -----------------------------------------------------------
   1-create variables radius,area
   2-accept radius from the user and store it into radius variable
   3-if area of circle1> area of circle2
     circle1 is larger than circle2
   4-else area of circle1<area of circle2
     circle1 is smaller than circle2
   5-display on screen

*/
#include<stdio.h>
void main()
{
    int radius_1,area_1,radius_2,area_2;
    printf("enter radius of circle 1");
    scanf("%d",&radius_1);
    printf("enter radius of circle 2");
    scanf("%d",&radius_2);
    area_1=3.14*radius_1*radius_1;
    area_2=3.14*radius_2*radius_2;
    if(area_1>area_2)
    {
        printf("circle 1 is larger than circle 2");
        
    }
    else(area_1<area_2);
    {
      printf("circle 1 is smaller than circle 2"); 
    }
}