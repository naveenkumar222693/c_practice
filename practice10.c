#include<stdio.h>
#include<stdlib.h>
int main()
{
   int number;
   system("clear");
   printf("\nenter a number: ");
   scanf("%d",&number);
   if((number%2)==0)
   printf("\nTHE NUMBER IS EVEN",number);
   else
   printf("\nTHE NUMBER IS ODD",number);
   return 0;


}