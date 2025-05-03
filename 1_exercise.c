 /*
 write a program to findout whether business man has made profit or loss from given purchase and sales price. 
steps
-----------------------------------------
1-create variables purchase price and sale price
2-accept purchase price and sale price from the user and store it in purchase price and sale price variables
3-if sale price>purchase price
    buisnessman has profit
    sale price<purchase price
    buisnessman has loss
4- display profit or loss
5- good bye
*/
#include<stdio.h>
void main()
{
    float purchase_price,sale_price;
    printf("enter purchase price");
    scanf("%f",&purchase_price);
    printf("enter sale price");
    scanf("%f",&sale_price);

    if(sale_price>purchase_price)
    {
        printf("it is a profit");
    }
    if(sale_price<purchase_price)
    {
        printf("it is a loss");

    }
    printf("\ngood bye");
}