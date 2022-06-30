//write a c program to calculate the area of a rectangle

#include<stdio.h>
int length, breadth;
int main(){
printf("what is the length of the rectangle \n");
scanf("%d",&length);
printf("what is the breadth of the rectangle \n");
scanf("%d",&breadth);
int area = length*breadth;
printf("The area of the rectangle is %d", area);
return 0;
}
