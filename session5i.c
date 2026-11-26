#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    system("clear");
    printf("enter a number: ");
    scanf("%d",&n);
    
    (n%2)==0?printf(" NUMBER IS EVEN"):printf("NUMBER IS ODD");
    return 0;

    
}