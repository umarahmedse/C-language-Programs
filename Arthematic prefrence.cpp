//program to operate 3*x/y-z+k
#include <stdio.h>
int main(){

int x=2,y=3,z=3,k=1;
float result=3*x/y-z+k;
float result2= (3*x)/(y-z+k);
printf("\n the value of result in C operation is %f\n",result);
printf("\n the value of result in paranthesis is %f\n",result2);
return 0;
}