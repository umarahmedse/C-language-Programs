//8.	Write a code that inputs base and height of a triangle, displays them, then finds the area of triangle and displays the area.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int height,base;
 float area;
 printf("Enter the value of height of the triangle?:\n");
 scanf("%d",&height);
  printf("Enter the value of base of the triangle?:\n");
 scanf("%d",&base);
area=(0.5)*(base)*(height);
printf("The Area Of The Triangle Is %f\n",area);
    return 0;
}