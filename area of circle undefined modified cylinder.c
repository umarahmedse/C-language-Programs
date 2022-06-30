#include<stdio.h>
float radius;
float pi= 3.14;
float height;
float main(){

printf("Enter the value for radius \n");

scanf("%f",&radius);

float area = (pi*radius*radius);

printf("The area of the circle is %f \n", area);

printf("Enter the height of Cylinder \n");
scanf("%f",&height);
float area2 = (pi*radius*radius*height);
printf("The area of cylinder is %f \n",area2);
return 50;
}
