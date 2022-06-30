#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
int pakistan,india,bangladesh,usa;
int a; //country
char b; //id card yes or no
int c;
int other;
printf("Enter your country from the options below \n 1:Pakistan \n 2:India \n 3:Bangladesh \n 4:USA \n");
scanf ("%d",&a);
if(a==1){
printf("Do you have your national id card (y/n)? \n");
scanf("%s",&b);

if (b=='n'|| b=='N')
{
    printf("Select the reason from below for not having ID card \n 1: Age is less than 18 \n 2: ID card application is submitted \n 3: ID card is lost \n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
             printf("If your age is less than 18,you can't apply here\n");
             break;
             case 2:
             printf("Please respond to us after the completion of ID card application\n");
             break;
    case 3:
             printf("Please apply for duplicate ID card application\n");
             break;
    default:
            printf("No correct option selected \a");
        break;
    }
    
}
else{
     if(b=='y' || b=='Y')
     {
        int province;
     printf("Please enter your province:\n 1:KPK \n 2:Punjab \n 3:Balochistan \n 4:Sindh \n 5:Gilgit Baltistan \n 6:Other \n");
     scanf("%d",&province);
     switch (province)
     {
     case 1:
           printf("You have been enrolled in Sehat Insaaf Health Program");
        break;
     case 2:
           printf("You have been enrolled in Prime Minister Laptop Scheme");
           break;
     case 3:
           printf("You have been enrolled in Education For All Scheme");
           break;
     case 4:
           printf("You have been enrolled in Sehat Insaaf Health Program");
           break;
     case 5:
           printf("You have been enrolled in Baltistan Youth Development Program ");
           case 6:
           
        printf("Select the other region\n 1:Azad Kashmir \n 2:FATA \n 3:Not in list \n");
        scanf("%d",&other);
        switch (other)
        {
        case 1:
         printf("You have been enrolled in Kashmir Development Program");
            break;
        case 2:
         printf("You have been enrolled in FATA Educational Scholarships Scheme");
         break;
         case 3:
         printf("Please contact on helpline for assistance");
         break;
        default:
        printf("No correct option selected");
            break;
        }
        break;
     default:
     printf("No correct option selected");
        break;
     }
    }
}
}
else{
    if(a==2 || a==3 || a==4){
    printf("you are not eligible because you are not from Pakistan");
    }
    else{
        printf("No Correct Option Selected");
    }
}
    return 0;
}
