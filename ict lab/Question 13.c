//Write a program to check the voter eligibility to vote. Program will read user’s age, if age is greater than 18, the program will ask user if he/she has a NIC. User will enter “Y” if he has NIC and “N” if no NIC. If user is older than 18 and has a NIC, program will ask for expiry date of NIC. User will enter the year of NIC expiration. Year will be checked against current year. If NIC haven’t expired yet, the user is eligible for vote. Else display a proper error message.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
    int age;
    char cnic;
 printf("Please enter your age: \n");
 scanf("%d",&age);
 if (age>=18){
    printf("Do you have cnic?(y/n)\n");
    scanf(" %c",&cnic);
    if (cnic=='y'||cnic=='Y')
    {
        int expyear;
        printf("Enter the expiry year of your cnic:\n");
        scanf("%d",&expyear);
        int curyear;
        printf("Enter current year:\n");
        scanf("%d",&curyear);
        if (curyear<expyear)
        {
           puts("You Are Eligible!\a\n");
        }
        else if(expyear<curyear)
        { 
            puts("Not Eligible As Cnic Is Expired\a");
        }
        
    }
    else{
        puts("Not Eligible Due To No CNIC\a");
    }
    
    }
 else{
    puts("Not Eligible As Age Is Less Than 18\n \a");
 }
    return 0;
}