#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number;
    system("clear");
    printf("\nenter a number: ");
    scanf("%d",&number);
    (number>0)?printf("\nthe number is positive"):printf("\nenter number is negative");
    return 0;
}