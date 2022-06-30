//C program to check even or odd in numbers
#include <stdio.h>
int a,b;
int main(){
	printf("Enter a number \n");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("%d is an even number", a);
	}
	else{
		printf("%d is an odd number", a);
	}
	return 0;
	
}