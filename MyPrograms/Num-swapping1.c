#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
     printf("Enter A and B : ");
     scanf("%d%d",&a,&b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("\nAfter swapping :%d\t%d",a,b);
     getch();

}
