//Percentage Calculator 
#include<stdio.h>
int main()
{ int marks,totalmarks;
float percentage;
printf("enter your marks:");
scanf("%d", &marks);
printf("enter totalmarks:");
scanf("%d", &totalmarks);
percentage= (marks*1.0*100)/totalmarks;
printf("percentage= %f",percentage);
return 0;





}