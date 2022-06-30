#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a;
 for(a; ; a++){
    printf("Enter a number \n");
 scanf("%d",&a);
 if(a%7==0 || a==1){
    printf("You have entered a multiple of 7\n \a");
    printf("You entered %d \n",a);
    break;
 }
 }
    return 0;
}