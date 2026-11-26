#include<stdio.h>
#include<math.h>
int main()
{
    int a = 2;
    int b = 3;
    int power = pow(b,a);
    printf("%d\n",power);

    //modular operator and operartors precedence
    printf("%d\n",5%4);
    printf("%d\n",10%4);

    printf("%f\n",2/3);
    int x = a+b*2;

    printf("%d\n",x);
    int y = a*b/b*2;

    printf("%d\n",y);
    int z = 2*(3/2)*4;

    printf("%d\n",z);
    int n = 5+2/2*3;

    printf("%d\n",n);
    //relation operators
    
    printf("%d\n",4==4);//output;1 means true
    printf("%d\n",4==5);//output;0 means false
    printf("%d\n",2==2);
    printf("%d\n",2==3);
    printf("%d\n",2!=2);
    printf("%d\n",2!=3);
    return 0;
}