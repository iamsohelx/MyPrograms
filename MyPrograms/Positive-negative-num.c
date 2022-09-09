#include<stdio.h>
#include<conio.h>
void main()
{
// A program for find its an positive or negative number
int n;
printf("Enter any Number : ");
scanf("%d",&n);

if(n>0)
printf("\nIts an Positive Number");
else if (n<0)
printf("\nIts an Negative Number");
else
printf("\nIts a Zero");
getch();
}