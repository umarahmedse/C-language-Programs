//4.	Write a program that inputs an integer value and checks if it is even or odd. 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a,b;
 printf("Enter the number you want to check for odd or even number?:\n");
 scanf("%d",&a);
 if (a%2==0)
 {
    printf("%d is an even number/integer",a);
 }
 else{
    if (a%2!=0)
    {
        printf("%d is an odd number/integer",a);
    }
    
 }
 
    return 0;
}