#include <stdio.h>
float r,p,i;
float main(){
    printf("Enter the value of principle \n");
    scanf("%f", &p);
printf("Enter the value of rate \n");
    scanf("%f", &r);
    printf("Enter the value of interest \n");
    scanf("%f", &i);
    float si= (r*p*i)/100;
    printf("The rate of interest for given values is %f", si);
    return 0;


}
