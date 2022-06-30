#include<stdio.h>
float celcius;
float main(){
printf("Enter the temprature in celcius \n");
scanf("%f",&celcius);
float farenheit= (celcius*9/5)+32;
printf("The value of given celcius in faranheit is %f \n", farenheit);


return 0;
}
