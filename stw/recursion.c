#include<stdio.h>
#include<stdlib.h>

void func(int n){
    int i=0;
    i++;
    if(n>0)
    {
        //ascending order
        func(n-1);
          printf("%d\n",n);
        //descending order
        
       // printf("%d\n",n);
        //func(n-1);
        
    }
}

int main()
{

int n;
printf("enter the number : ");
scanf("%d",&n);

func(n);

}