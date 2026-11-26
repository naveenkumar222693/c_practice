#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    system("clear");
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    { 
        printf("even number");
    
    }
    else
    {
        printf("odd number");
    }
    return 0;
}