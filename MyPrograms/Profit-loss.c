#include<stdio.h>
#include<conio.h>
void main()
{
int cp,sp,amount;

printf("Enter Cost & Sell Price : ");
scanf("%d%d",&cp,&sp);

amount=sp-cp;

if(amount>0)
 printf("\nMade profit by Rs.%d",amount);
else if(amount<0)
 printf("\nIncurred Loss by Rs.%d",abs(amount));
else
 printf("\nMade No Profit-Loss");
getch();


}