#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int number,result;
    system("clear");
    printf("enter a number:");
    scanf("%d",&number);

    number--;
    printf("post-decremented number is %d\n",number);

    --number;
    printf("pre decremented number is %d\n",number);

    printf("enter a number: ");
    scanf("%d",&number);
    result = number--;
    printf("post decremented number(as an expression) is %d\n",result);
    printf("post decremented number after evaluation (as an expression) is %d\n",number);
    
    result = --number;
    printf("pre decremented number (as an expression ) is %d\n",result);
    printf("pre decremented number after evaluation (as an expression) is %d\n",number);

    return 0;


}