//5.	Write a C program that inputs a number from user. If the number is greater than zero display the message “Positive number”. Continue by adding 10 to the user-entered number and display the result. Else if the number is less than zero display the message “Negative number. Continue by subtracting 10 from the user-entered number and display the result.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a,b,c;
 printf("Enter a number to check:\n");
 scanf("%d",&a);
 if (a>0)
 {
    printf("%d is greater than 0\n",a);
    c=a+10;
    printf("%d after the addition of 10",c);
 }
 else{
    printf("%d is less than 0\n",a);
    c=(a)-(10);
    printf("%d after the addition of 10",c);
 }
    return 0;
}