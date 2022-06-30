#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void f1();
void f2();
char a;
int main(){ 
 printf("Do you understand programming?(y/n)\n");
 scanf("%c",&a);
 if (a=='y'||a=='Y')
 {
    f1();
 }
 else{
    if (a=='n'||a=='N')
    {
        f2();
    }
    
 }
    return 0;
}

void f1(){
printf("Programming Is Medium If You Have Knowlegde About Syntax And The Working Of Compiler\n");
printf("I Hope You Understood");
}

void f2(){
    printf("Programming is hard if you dont have logics,syntax and informaton about working of compiler\n");
    printf("Good Bye");
}