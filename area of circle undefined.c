#include<stdio.h>
float radius;
float pi= 3.14;
float main(){

printf("Enter the value for radius \n");

scanf("%f",&radius);

float area = (pi*radius*radius);

printf("The area of the circle is %f \n", area);

return 0;
}
