#include<stdio.h>
#include<conio.h>
void main()
{
    float p,n,r,si;

    printf("Enter Principal Amount : ");
    scanf("%f",&p);

    printf("Enter Number of years : ");
    scanf("%f",&n);

    printf("Enter Rate of Intrest : ");
    scanf("%f",&r);

    si=(p*n*r)/100;

    printf("\nSimple Intrest : %f",si);
    getch();
}
