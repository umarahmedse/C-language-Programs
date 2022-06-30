#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if (a<10){
		printf("Enter the value between 10 and 20\n");
	}
	else{
	
	while (a>=10 && a<=20){
		printf("the value of a is %d\n",a);
		a++;
	}
	} 
	return 0;
}