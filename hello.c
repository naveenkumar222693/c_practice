#include<stdio.h>

int main()
{
    int a = 22;
    int oldage = 23;
    /* dont use variables before its use
    ex,
    int a = 22;
    int oldage = year;
    year = 2
    */
   int year = 2;
   int newage = oldage + year;
   scanf("%d,newage");
   printf("age of naveen is %d  :",newage);
   return 0 ;

}