#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if (a<10){
		printf("Enter the value between 10 and 100\n");
	}
	else{
	do{
		printf("The value of a is %d\n",a);
		a++;
	}	
	while(a<=100);
	}

	return 0;
}