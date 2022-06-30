#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if (a<10){
		printf("Enter the value between 10 and 100\n");
	}
	else{
	
	while (a>=10 && a<=100){
		printf("the value of a is %d\n",a);
		a++;
		++a;
		a+=10;
	}
	} 
	return 0;
}