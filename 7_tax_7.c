/*
    write a program to findout gross income,income tax,net income of the user from the monthly income given by the user
    steps
    -----------------------------------------------------------------
    1-create variable income,gross income,tax,net income
    2-accept monthly income from the user and store in the income variable
    3-convert monthly income to gross income 
       income*12
    4-if gross income>=2400001
       tax=gross income*0.30
      if gross income>=2000001
        tax=gross income*0.25
      if gross income>=1600001
       tax=gross income*0.20
      if gross income>=1200001
        tax=gross income*0.15
      otherwise
        tax=0
    5-find net income
    6-display net income gross income and tax
*/
#include<stdio.h>
void main()
{
   int income,gross_income,tax,net_income;
   printf("enter monthly income ");
   scanf("%d",&income);
   gross_income=income*12;
   if(gross_income>=1200001 && gross_income<=1600000)
   {
    tax=gross_income*0.15;
   }
   else if(gross_income>=1600001 && gross_income<=2000000)
   {
    tax=gross_income*0.20;
   }
   else if(gross_income>=2000001 && gross_income<=2400000)
   {
    tax=gross_income*0.25;
   }
   else if(gross_income>=2400001)
   {
    tax=gross_income*0.30;
   }
   else
   {
    tax=0;
   }
   net_income=gross_income - tax;
   printf("net income =%d gross income =%d tax=%d",net_income,gross_income,tax);

}