#include<stdio.h>
#include<conio.h>

void main()
{
    int m1,m2,m3,tot;
    float avg;
    char sname[20];

    printf("Enter Student Name : ");
    scanf("%s",&sname);

    printf("Enter M1,M2 And M3 : ");
    scanf("%d%d%d",&m1,&m2,&m3);

    tot=m1+m2+m3;
    avg=tot/3.0;

    printf("\nThe total marks : %d",tot);
    printf("\nAnd Avrage : %f",avg);
    getch();
}
