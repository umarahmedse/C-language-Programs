#include <stdio.h> 

int main(){ 
 int a,b;
 char adult;
 printf("Enter the first value \n");
 scanf("%d",&a);
 printf("Enter the second value \n");
 scanf("%d",&b);
 printf("Are you adult?\n");
 scanf("%s",&adult);
 if (a==10&&adult=='y'){
    printf("I am  10 \n");
 }
 else
 {
    printf("You have succesfully tested else \n");
 }
 
    return 0;
}