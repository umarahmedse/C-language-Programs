#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){ 
 int a,b,c;
 char ch;
 printf("Enter the value:\n");
 scanf(" %c",&ch);
 if ((int)ch>=97 && (int)ch<=122 || (int)ch>=65 && (int)ch<=90)
 {
   if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
   {
    printf("Character is vowel");
   }
   else if (ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u'||ch!='E'||ch!='A'||ch!='O'||ch!='I'||ch!='U')
   {
    printf("Character is consonant");
   }
   }
 else{
    printf("Invalid Entry!\n");
 }
    return 0;
}