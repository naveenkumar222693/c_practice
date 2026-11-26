#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,n3,big;
    system("clear");
    printf("\n enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    big=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("\nthe biggest among %d %d and %d is %d\n",n1,n2,n3,big);
    return 0;

}