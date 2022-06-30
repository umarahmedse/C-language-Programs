#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
   int mth, chem, phy, bio, science;
   int passcount;
   printf("Please enter the marks obtained in mathematics:\n");
   scanf("%d", &mth);
   if (mth > 100 || mth < 0)
   {
      printf("Error!\n");
   }
   else
   {
      if (mth > 50)
      {
         passcount = 1;
      }
      printf("Please enter the marks obtained in chemistry:\n");
      scanf("%d", &chem);
      if (chem > 100 || chem < 0)
      {
         printf("Error!\n");
      }
      else
      {
         if (chem > 50)
         {
            passcount = passcount + 1;
         }
         printf("Please enter the marks obtained in science:\n");
         scanf("%d", &science);
         if (science > 100 || science < 0)
         {
            printf("Error!\n");
         }
         else
         {
            if (science > 50)
            {
               passcount = passcount + 1;
            }
            printf("Please enter the marks obtained in biology:\n");
            scanf("%d", &bio);
            if (bio > 100 || bio < 0)
            {
               printf("Error!\n");
            }
            else
            {
               if (bio > 50)
               {
                  passcount = passcount + 1;
               }
               printf("Please enter the marks obtained in physics:\n");
               scanf("%d", &phy);
               if (phy > 100 || phy < 0)
               {
                  printf("Error!\n");
               }
               else
               {
                  if (phy > 50)
                  {
                     passcount = passcount + 1;
                     printf("The Number of subjects passed are %d", passcount);
                  }
               }
            }
         }
      }
   }
   return 0;
}