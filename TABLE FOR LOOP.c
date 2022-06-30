#include <stdio.h>
#include <stdlib.h>
int main(){
int n,j;
int m=1;
printf("Enter the number of table you want to find\n");
scanf("%d",&n);
printf("Enter the number upto which the table should be\n");
scanf("%d",&j);
for (n; m<=j ; m++)
{
    int o= n*m;
    printf("%d x %d is %d \n",n,m,o);
}
return 0;

}
