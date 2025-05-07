/*
   write a program to find out which cylinder is larger from the two cylinder on the basis of radius and height
   steps
   -----------------------------------------------------
   1-create variables radius,area,height
   2-accept radius and height from the user and store it into radius and height variables
   
*/
#include<stdio.h>
void main()
{
    int radius_1,height_1,radius_2,height_2,area_1,area_2;
    printf("enter radius of cylinder 1 ");
    scanf("%d",&radius_1);
    printf("enter radius of cylinder 2 ");
    scanf("%d",&radius_2);
    printf("enter height of cylinder 1 ");
    scanf("%d",&height_1);
    printf("enter height of cylinder 2 ");
    scanf("%d",&height_2);
    area_1=2*3.14*radius_1*height_1+3.14*radius_1*radius_1;
    area_2=2*3.14*radius_2*height_2+3.14*radius_2*radius_2;
    if(area_1>area_2)
    {
        printf("cylinder 1 is larger than cylinder 2");

    }
    else(area_1<area_2);
    {
        printf("cylinder 1 is smaller than cylinder 2");
    }
}