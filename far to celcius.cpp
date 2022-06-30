#include <stdio.h>
float farenheit;
int main(){
printf("Enter the temprature in farenheit \n");
scanf("%f",&farenheit);
float celcius= (farenheit-32)*(0.556);
printf("The value of given faranheit in celcius is %f \n", celcius);


return 0;
}
