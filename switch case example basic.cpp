#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int rating,a,b;
 printf("Enter your rating from (1-5)\n");
 scanf("%d",&rating);
 
 switch(rating){
 
           case 1:
           	printf("We are really sorry for our poor services \a \n");
           	break;
           	case 2:
           	printf("We will try to ipmrove a lot\a \n");
           	break;
           	case 3:
           		printf("We have average quality, we'll try to improve\a \n");
           		break;
           		case 4:
           			printf("Thank you for good rating, enjoy\a \n");
           			break;
           			case 5:
           				printf("Thanks for your good rating \a \n ");
           				break;
           				default:
           					puts("Enter valid rating \a \n");}
							       return 0;
}