//Write a program that reads two values from the user and check whether the second value is the divisor of the first value or not.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a,b;
 printf("Enter the value of a:\n");
 scanf("%d",&a);
  printf("Enter the value of b\n");
 scanf("%d",&b);
 if (a%b==0)
 {
    printf("%d is the divisor of %d",b,a);
 }
 else{
    if (a%b!=0)
    {
        printf("%d is not the divisor of %d",b,a);
    }
 }
    return 0;
}