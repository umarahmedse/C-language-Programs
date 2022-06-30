#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if (a>=5||a<=0){
		printf("Enter the value between 1 and 4\n");
	}
	else{
	do{
		printf("The value of a is %d\n",a);
		a++;
	}	
	while(a<=4);
	}

	return 0;
}