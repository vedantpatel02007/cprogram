/*
      concept of relational operators
      relational operators/comparision
      it is used to compare variable/value. it always giveresult in terms true(1)orfalse(0)

      1 == used to check 2 variables has some value or not
      2 != used to check 2 variable has different valule or not
      3 < used to check wether left side variable is less than right side variable or not
      4 > used to check wether right side variable is greater than left side variable or not
      5 <= used to check left side variable is less than or equal tp right side variable
      6 >=used to check right side variable is greater than or equal to left side variable


*/
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 11;
    int result;
    printf("a=%d, b=%d, result=%d",a,b,result);

    result = a ==b;
    printf("\n%d = %d == %d",result,a,b);

    result = a<b;
    printf("\n%d = %d < %d",result,a,b);

    result = a>b;
    printf("\n%d = %d>%d",result,a,b);

    result = a>=b;
    printf("\n%d = %d>=%d",result,a,b);

    result = a<=b;
    printf("\n%d = %d<=%d",result,a,b);
    
    


}