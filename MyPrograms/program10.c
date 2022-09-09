#include<stdio.h>
#include<conio.h>

void main()

{
    int n,d1,d2,d3,d4,d5,s;

    printf("Enter any 5 digit Number : ");
    scanf("%d",&n);

    d1=n/10000;
    d2=(n%10000)/1000;
    d3=(n%1000)/100;
    d4=(n%100)/10;
    d5=n%10;

    s=d1+d2+d3+d4+d5;

    printf("\nSum of digits : %d",s);
    getch();

}
