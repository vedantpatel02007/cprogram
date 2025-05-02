#include<stdio.h>
void main()
{
    int a=10,b=10;
    printf("\n%d=a %d=b",a,b);

    a=10;
    b=a++;
    printf("\n%d=a %d=b",a,b);

    a=10;
    b=++a;
    printf("\n%d=a %d=b",a,b);
}