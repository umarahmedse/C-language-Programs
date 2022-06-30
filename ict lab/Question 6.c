//6.	Write a program that read two numbers from user. If the first number is greater than the second display the message “First is greater value”. Continue by multiplying the two numbers and displaying the result. Else if the second number is greater than the first display the message “Second is greater value”. Continue by adding the two numbers and display the result.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a,b,c,d,e;
 printf("Enter the first number\n");
 scanf("%d",&a);
 printf("Enter the second number\n");
 scanf("%d",&b);
 if (a>b)
 {
    printf("The First Number Is Greater Than The Second Number.\n");
    c=a*b;
    printf("The Multiplication Result Is %d.\n",c);
 }
 else{
    if (a<b)
    {
        printf("The Second Number Is Greater Than The First Number.\n");
        c=a+b;
        printf("The Addition Result Is %d.\n",c);
    }
    else{
        if (a==b)
        {
            puts("The Numbers Are Equal");
        }
        
    }
    
 }
 
    return 0;
}