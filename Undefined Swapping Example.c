#include<stdio.h>
int a,b,temp;
int main(){
printf("Enter the value of a \n");
scanf("%d",&a);
printf("Enter the value of b \n");
scanf("%d",&b);
printf("The values before swapping are %d and %d \n",a,b);
temp= a;
a= b;
b= temp;
printf("The values after swapping are %d and %d \n",a,b);
return 0;
}
