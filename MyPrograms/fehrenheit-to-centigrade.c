#include<stdio.h>
#include<conio.h>

void main()
{
    float f,c;

    printf("Enter Temperature : ");
    scanf("%f",&f);

    c=5.0/9.0*(f-32);

    printf("\nCentigrade :%f",c);
    getch();
}
