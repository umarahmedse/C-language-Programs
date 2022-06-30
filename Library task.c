#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int fscm, c, d, e, percent;
    float percent2, initialm;
    char cnic, issbgrade, medicalstatus;
    printf("Please enter your Fsc Marks Out Of 1100:\n");
    scanf("%d", &fscm);
    percent2 = fscm * 100 / 1100;
    if (percent2 >= 60)
    {
        printf("Do You Have Cnic? (y/n):\n");
        scanf(" %c", &cnic);
        if (cnic == 'y' || cnic == 'Y')
        {

            printf("Please enter percentage of your initials marks:\n");
            scanf("%f", &initialm);
            if (initialm >= 60)
            {
                printf("Please enter ISSB Grade(A/B)\n");
                scanf(" %c", &issbgrade);
                if (issbgrade == 'A' || issbgrade == 'B' || issbgrade == 'a' || issbgrade == 'b')
                {
                    printf("Please enter the medical status (Fit/Unfit)\n 1:Fit \n 2:Unfit\n");
                    scanf(" %d", &e);
                    if (e == 1 || e == 1 || e == 1)
                    {
                        printf("Selected\n");
                    }
                    else
                    {
                        switch (e)
                        {
                        case 2:
                            printf("You Are Unfit! Not Eligible\n");
                            break;

                        default:
                            printf("Invalid Entry!\n");
                            break;
                        }
                    }
                }
                else
                {
                    printf("Invalid ISSB Grade Entered\n");
                }
            }
            else
            {
                printf("Less Than 60 Percent Marks In Initials! Not Eligible\n");
            }
        }
        else
        {
            printf("No CNIC! Disqulified!\n");
        }
    }
    else
    {
        printf("Marks Less Than 60 Percent!\n");
    }

    return 0;
}