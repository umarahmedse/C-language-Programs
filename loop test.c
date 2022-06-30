#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a;
 for(a; ; a++){
    printf("Enter a number \n");
 scanf("%d",&a);
 if(a%2!=0){
    printf("You have entered an odd number\n \a");
    break;
 }
 }
    return 0;
}