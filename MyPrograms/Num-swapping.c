#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;

    printf("Enter A and B : ");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("\nAfter swapping :");
    printf("A = %d\tB = %d",a,c);
    getch();
}
