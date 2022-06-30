#include<stdio.h>
int a,b,temp;

int main(){
printf("Enter the value of a \n");
scanf("%d",&a);
printf("Enter the value of b \n");
scanf("%d",&b); //a=b b=a
printf("The values before swapping are %d and %d \n",a,b);
temp= a; //temp=10
a= b; //a=20
b= temp;//b==10
printf("The values after swapping are %d and %d \n",a,b);
return 0;
}
