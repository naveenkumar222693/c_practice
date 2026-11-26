#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,sum,diff,prod,rem;
    float quo;
    system("clear");
    printf("enter two number: ");
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    diff = num1-num2;
    prod = num1*num2;
    rem = num1%num2;
    quo = (float)num1/num2;
    printf("sum of %d and %d is %d\n",num1,num2,sum);
     printf("difference of %d and %d is %d\n",num1,num2,diff);
    printf("product of %d and %d is %d\n",num1,num2,prod);
  printf("remainder of %d and %d is %d\n",num1,num2,rem);
   printf("quotient of %d and %d is %f",num1,num2,quo);
   return 0;
}







