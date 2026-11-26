#include<stdio.h>
#include<stdlib.h>
int main()
{
   int number;
   system("clear");
   printf("\nenter a number: ");
   scanf("%d",&number);
   //(number&1)?printf("\nthe number is odd",number):printf("\nthe number is even",number);
   (number&1)==0?printf("the number %d is even",number):printf("the number%d is odd",number);
   return 0;

}