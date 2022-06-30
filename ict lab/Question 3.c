//3.	Write a program that inputs an integer value and checks if it is greater or less than 0. 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a;
 printf("Enter a number to check:\n");
 scanf("%d",&a);
 if (a>0)
 {
    printf("%d is greater than 0\n",a);
 }
 else{
    printf("this number is less than zero\n");
 }
 
    return 0;
}