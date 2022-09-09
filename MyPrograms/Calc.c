#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
float n1,n2,res;
char opt;

printf("Enter first Number : ");
scanf("%f",&n1);

printf("\nOperator(+,-,/,*) : ");
scanf(" %c",&opt);

printf("\nEnter Second Number : ");
scanf("%f",&n2);

if(opt=='+')
res=n1+n2;
else if (opt=='-')
res=n1-n2;
else if (opt=='*')
res=n1*n2;
else if (opt=='/')
res=n1/n2;
else
{
    printf("\nInvalid Operator");
    getch();
    exit(0);
}

printf("\nYour Result : %.2f",res);
getch();



}