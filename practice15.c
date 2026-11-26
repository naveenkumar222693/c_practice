#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,temp,rev,dig;
    system("clear");
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    rev=0;
    while(n)
    {
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    if(temp==rev)
    printf("\nreverse form of %d is %d ---Palindrome",temp,rev);
    else
    printf("\nreverse form of %d is not %d ---Not a Palindrome",temp,rev);
    return 0;
}