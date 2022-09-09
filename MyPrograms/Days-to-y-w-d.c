#include<stdio.h>
#include<conio.h>

int main()

{
    int ndays,year,week,days;

    printf("Enter The Numbers Of Days : ");
    scanf("%d",&ndays);

    year=ndays/365;
    week=(ndays%365)/7;
    days=(ndays%365)%7;

    printf("\nNo. of years : %d",year);
    printf("\nNo. of week : %d",week);
    printf("\nNo. of Days : %d",days);
    getch();
    return 0;
}
