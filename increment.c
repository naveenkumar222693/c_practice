#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int number,result;
    system("clear");
    printf("enter a number:");
    scanf("%d",&number);

    number++;
    printf("post-incremnted number is %d\n",number);

    ++number;
    printf("pre incremented number is %d\n",number);

    printf("enter a number: ");
    scanf("%d",&number);
    result = number++;
    printf("post invremented number(as an expression) is %d\n",result);
    printf("post incremented number after evaluation (as an expression) is %d\n",number);
    
    result = ++number;
    printf("pre incremented number (as an expression ) is %d\n",result);
    printf("pre incremented number after evaluation (as an expression) is %d\n",number);

    return 0;


}