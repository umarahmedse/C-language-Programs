#include <stdio.h>
int main(){
	int a,n,c=1;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of n\n");
	scanf("%d",&n);
    if(a<=50){
		printf("Enter the value above 50 for a\n");
	}
	if(n<50||n>50){
		printf("Enter the value 50 for n\n");
 }

	for(a;a>n;a--){
	
		printf("The value of a is %d\n",a);
		if(a<=50)
		break;
	
	
}

	return 0;
}