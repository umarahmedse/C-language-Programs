//7.	Write a program that reads 2 numbers from user and calculates the sum1 by adding two values. Then reads 2 more values from user and Calculate sum2 by adding these values. Program then compare sum1 and sum2. If sum1 is greater than sum2, display “first set of values are greater than second set”, else display “second set of values are greater”. 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a,b,c,d,sum1,sum2;
 printf("Enter the First Number From First Set:\n");
 scanf("%d",&a);
 printf("Enter the Second Number From First Set:\n");
 scanf("%d",&b);
 printf("Enter the First Number From Second Set:\n");
 scanf("%d",&c);
 printf("Enter the Second Number From Second Set:\n");
 scanf("%d",&d);
 sum1=a+b;
sum2=c+d;
if (sum1>sum2)
{
    printf("The First Set Of Values Are Greater\n");
}
else{
    if (sum2>sum1)
    {
        printf("The Second Set Of Values Are Greater\n");
    }
    
}



    return 0;
}