//call by valve
#include <stdio.h>
int add(int x,int y)
{
    int c;
    c=x+y;
    x++;
    printf("add function valvue is : %d\n",x);
    return 0;

}   
int main()
{
   int a,b,sum;
   a=10;b=20;
   sum =add(a,b);
    printf("int main function valve is : %d\n",a);

    return 0;
}
