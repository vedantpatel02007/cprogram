#include<stdio.h>
void main()
{
    int a=10,b=2;
    printf("\n%d=a %d=b",a,b);

    a+=b;
    printf("\n%d=a %d=b",a,b);

    a-=b;
    printf("\n%d=a %d=b",a,b);

    a*=b;
    printf("\n%d=a %d=b",a,b);

    a/=b;
    printf("\n%d=a %d=b",a,b);

    a%=b;
    printf("\n%d=a %d=b",a,b);
}