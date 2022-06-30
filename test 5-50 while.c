#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 unsigned int a=5;
 do{
    if (a%2!=0 && a<=50)
    {
     printf("%d is odd\n",a);
    else{ 
        if (a>50){
        break;
    }
    }
    }
    a++;
    
 } while (1);
 return 0;
}