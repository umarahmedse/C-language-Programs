#include <stdio.h> 

int main(){ 
 int physics,chemistry,maths;
 printf("Enter physics marks \n");
 scanf("%d",&physics);
 printf("Enter chemistry marks \n");
 scanf("%d",&chemistry);
 printf("Enter maths marks \n");
 scanf("%d",&maths);
 float sum,percent;
 int total;
 sum= physics+chemistry+maths;
 percent= sum/300;
 total= percent*100;
 printf("The total marks percentage is %d \n",total);
    switch (total)
    {
    case 1:
      if (total<40)
      {
         printf("Your total percentage is less than 40 percent so you are failed \n");
      }
       break;
       case 2:
       if (physics<33)
       {
         printf("Your physics percentage is less than 33 percent so you are failed \n");
       }
       case 3:
       if (chemistry<33)
       {
         printf("Your chemistry percentage is less than 33 percent so you are failed \n");
       }
       if (maths<33)
       {
         printf("Your maths percentage is less than 33 percent so you are failed \n");
       }
       
    
    default:
               printf("Enjoy \n");
      break;
    }
 
    return 0;
}