#include<stdio.h>
#include<conio.h>
void main()
{
char sname[30];
float samt,comm;

printf("Enter Salesman name : ");
scanf("%s",&sname);
 printf("\nEnter Sales Amount : ");
 scanf("%f",&samt);

 if(samt>25000)
 comm=samt*10/100;
else
 comm=samt*8/100;

printf("\n%s's total Commision is : %.2f",sname,comm);
getch();
}