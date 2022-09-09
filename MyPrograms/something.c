#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    int pen, age;
    char gen, ename;

    printf("Enter Employee Name : ");
    scanf("%s", &ename);

    printf("\nEnter Your Gender : ");
    scanf("%s", &gen);

    gen = tolower(gen);

    if (gen == 'm' || gen == 'male' || gen == 'f' || gen == 'female')
    {
        printf("\nEnter Your Age : ");
        scanf("%d", &age);

        if (age >= 50)
        {
            if ((gen == 'm' || gen == 'male') && (age >= 60))
            {
                pen = 20000 + (20000 * 10) / 100;
            }
            else if ((gen == 'm' || gen == 'male') && (age >= 50))
            {
                pen = 15000 + (15000 * 7) / 100;
            }
            else if ((gen == 'f' || gen == 'female') && (age >= 60))
            {
                pen = 18000 + (18000 * 12) / 100;
            }
            else
            {
                pen = 15000 + (15000 * 10) / 100;
            }

            if (age < 50)
            {
                printf("\nYou Are Not Eligible For Pension");
            }
            else
            {
                printf("\nYour Pension is : %d", pen);
            }
        }
        else
        {
            printf("\nYou Are Not Eligible For Pension");
        }
    }
    else
    {
        printf("\nYou Are Not Eligible For Pension");
    }
    getch();
}