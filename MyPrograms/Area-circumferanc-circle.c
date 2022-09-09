#include<stdio.h>
#include<conio.h>
#define pi 22.0/7.0
int main()
{
    float r,ac,cc;
    printf("Enter Radius of Circle :");
    scanf("%f",&r);

    ac=pi*r*r;
    cc=2*pi*r;

    printf("\nArea of circle : %f",ac);

    printf("\nArea of circumferans : %f",cc);
    getch();
return 0;
}
