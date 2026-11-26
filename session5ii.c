#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    system("clear");
    printf("enter a number: ");
    scanf("%d",&n);
    
    if(n>=0)
       if(n>0)
            printf("THE NUMBER IS POSITIVE");
       else
            printf("THE NUMBER IS ZERO");
    else
        printf("THE NUMBER IS NEGATIVE");

    return 0;
}