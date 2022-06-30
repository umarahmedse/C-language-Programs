#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int age;
    char vote, cnic;
    printf("Please enter your age?:\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("do you have CNIC?:\n");
        scanf(" %c", &cnic);
        if (cnic == 'y' || cnic == 'Y')
        {
            printf("Do you have vote?:\n");
            scanf(" %c", &vote);
            if (vote == 'y' || vote == 'Y')
            {
                printf("You Are Eligible\n\a");
            }
            else
            {
                puts("Not eligible as no vote registered\n\a");
            }
        }
        else
        {
            puts("Not eligible as no cnic\a\n");
        }
    }
    else
    {
        printf("not eligible as age not 18 or above\a\n");
    }
    return 0;
}