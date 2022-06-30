#include <stdio.h>

int main()
{
 int isl,eng,urdu,bio,chem;

 printf("Enter Isl Marks : ");
 scanf("%d",&isl);
 
  int Marks = 5;
  printf("Enter Eng Marks : ");
 scanf("%d",&eng);
	
	 printf("Enter urdu Marks : ");
 scanf("%d",&urdu);
	
	 printf("Enter bio Marks : ");
 scanf("%d",&bio);
	
	 printf("Enter chem Marks : ");
 scanf("%d",&chem);
 
 if((isl > 100 || isl < 0) || (eng > 100 || eng < 0) || (chem > 100 || chem < 0) || (urdu > 100 || urdu < 0) || (bio > 100 || bio < 0)) 
 {
   printf("Error");
 }
 
 else{
 	if(isl < 50)
 	{
 		Marks -= 1;
	 }
	 	if(eng < 50)
 	{
 		Marks -= 1;
	 }
	 	if(bio < 50)
 	{
 		Marks -= 1;
	 }
	 	if(urdu < 50)
 	{
 		Marks -= 1;
	 }
	 	if(chem < 50)
 	{
 		Marks -= 1;
	 }
	
		printf("\nNo of Subject Passed are %d",Marks);

 }
	
	
}