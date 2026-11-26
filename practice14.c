#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,choice=0;
    system("clear");
    RETRY:
    printf("\n1.addition\n2.subtraction\n3.multiplication\n4.modular division\n5.division\n");
    printf("\n enter ur choice: ");
    scanf("%d",&choice);
    if(!(choice>=1 && choice<=5))
    {
        printf("\n!!!invalid choice!!!!");
        goto RETRY;
    }
   printf("\nenter two numbers: ");
   scanf("%d %d",&num1,&num2);
   switch(choice)
{
    case 1: printf("\nresult:%d + %d = %d",num1,num2,(num1+num2));
            break;
    case 2: printf("\nresult:%d - %d = %d",num1,num2,(num1-num2));
            break;
    case 3: printf("\nresult:%d * %d = %d",num1,num2,(num1*num2));
            break;
    case 4:(num2!=0)?printf("\nresult:%d %% %d = %d",num1,num2,(num1%num2)):printf("\n!!!division by zero error!!!");
            break;
    case 5:(num2!=0)?printf("\nresult:%d / %d = %d",num1,num2,(num1/num2)):printf("\n!!!division by zero error!!!");break;

}
return 0;
}