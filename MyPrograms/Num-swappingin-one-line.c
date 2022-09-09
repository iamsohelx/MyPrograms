#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;

    printf("Enter A and B : ");
    scanf("%d%d",&a,&b);

    a=(a*b)/(b=a);

    printf("\nAfter Swapping");
    printf("A = %d\tB = %d",&a,&b);
    getch();
}
