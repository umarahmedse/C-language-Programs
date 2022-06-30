#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b,c,d;
	printf("Enter the marks obtained in maths out of 100 \n");
	scanf("%d",&a);
	printf("Enter the value of obtained in urdu out of 100 \n");
	scanf("%d",&b);
	printf("Enter the value of obtained in science out of 100 \n");
	scanf("%d",&c);
	printf("Enter the value of obtained in english out of 100 \n");
	scanf("%d",&d);
	int total= (a+b+c+d)/4;
	
	if(total>=90){
		printf("Your grade is A+");
	}
	else{
		if(total>=80){
			printf("Your grade is B+");
		}
		else{
			if(total>=65){
				printf("Your grade is C+");
			}
			else{
				if(total>=55){
					printf("Your grade is D");
				}
					else{
						printf("Failed");
					}
				}
			}
		}

	return 0;
	
}