/*
    write a program to convert 2 digit amount into words
    steps
    ---------------------------------------
    1-create variable amount,first_digit,second_digit
    2-accept amount from the user
    3-find first digit
    amount/10=first digit
    4-find second digit
    amount%10=second digit
    5-display words 
*/
#include<stdio.h>
void main()
{
    int amount,first_digit,second_digit;
    printf("enter 2 digit amount");
    scanf("%d",&amount);
    first_digit=amount/10;
    second_digit=amount%10;
    if(first_digit==1)
    {
        printf("one ");
    }
    else if(first_digit==2)
    {
        printf("two ");
    }
    else if(first_digit==3)
    {
        printf("three ");
    }
    else if(first_digit==4)
    {
        printf("four ");
    }
    else if(first_digit==5)
    {
        printf("five ");
    }
    else if(first_digit==6)
    {
        printf("six ");
    }
    else if(first_digit==7)
    {
        printf("seven ");
    }
    else if(first_digit==8)
    {
        printf("eight ");
    }
    else if(first_digit==9)
    {
        printf("nine ");
    }
    else
    {
        printf("zero" );
    }
    if(second_digit==1)
    {
        printf("one ");
    }
   else if(second_digit==2)
    {
        printf("two ");
    }
    else if(second_digit==3)
    {
        printf("three ");
    }
    else if(second_digit==4)
    {
        printf("four ");
    }
   else if(second_digit==5)
    {
        printf("five ");
    }
   else if(second_digit==6)
    {
        printf("six ");
    }
   else if(second_digit==7)
    {
        printf("seven ");
    }
   else if(second_digit==8)
    {
        printf("eight ");
    }
   else if(second_digit==9)
    {
        printf("nine ");
    }
    else
    {
        printf("zero ");
    }

    

    
      
    
    
    
    
}