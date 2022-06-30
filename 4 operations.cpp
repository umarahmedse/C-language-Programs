#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the first integer \n");
	scanf("%d",&a);
	printf("Enter the second integer \n");
	scanf("%d",&b);
	int sum=a+b;
	float div= a/b;
	int pro=a*b;
	int dif= a-b;
	printf("\n The sum is %d \n The difference is %d \n The division is %f \n The product is %d", sum, dif, div, pro);
	return 0;
}