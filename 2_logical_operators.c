#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int result;

    result = a < b && b < c;
    printf("%d %d<%d && %d<%d",result,a,b,b,c);

    result = a < b || b > c;
    printf("\n%d %d<%d && %d<%d",result,a,b,c);

    result = a > b || b > c;
    printf("\n%d %d>%d && %d<%d",result,a,b,c);

    result = !(a == b);
    printf("\n%d == %d",result,a,b);
}
