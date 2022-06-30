#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void idcardyes();
int main(){ 
    printf("please select your country\n 1: Pakistan \n 2: India \n");
    scanf("%d",&a);
    if (a==1)
    {
int a,b,c,d,e,f;
        idcardyes();
    }
    
    return 0;
}





void idcardyes(){
    char y;
                  printf("Do you have CNIC? (y/n) \n");
                  scanf("%s",&y);
                  if (y=='y'||y=='Y')
                  {
                    printf("You are eligible\n");
                  }
                  else if (y=='n'||y=='N')
                  {
                    printf("You are not eligible\n");
                  }
                  
}