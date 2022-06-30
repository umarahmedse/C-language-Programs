#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int a;
int main(){ 
     printf("Enter your rating 1-5\n \a");
scanf("%d",&a);
switch (a)
{
case 1:
printf (" very poor\n");
    break;
    case 2:
    printf (" poor\n");
break;
case 3:
printf("average\n");
break;
case 4:
printf("average 4\n");
break;
case 5:
printf("average 5\n");
break;
default:
printf("error\n");
    break;
}
//printf("erroooooor\n");
    return 0;
}