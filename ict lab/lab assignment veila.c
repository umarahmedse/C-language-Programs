#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void fun1();
int main(){ 
 int marks[5];
 printf("Enter the marks obtained in chemistry:\n");
 scanf("%d",&marks[1]);
 printf("Enter the marks obtained in chemistry:\n");
 scanf("%d",&marks[2]);
 printf("Enter the marks obtained in chemistry:\n");
 scanf("%d",&marks[3]);
 printf("Enter the marks obtained in chemistry:\n");
 scanf("%d",&marks[4]);
 printf("Enter the marks obtained in chemistry:\n");
 scanf("%d",&marks[5]);
 int total;
 total=marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
 printf("The total sum of marks are %d\n\a",total);



    return 0;
}
