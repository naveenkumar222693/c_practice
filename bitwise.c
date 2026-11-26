#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned short int a,b,c,d,e,f,g,h,n;
    system("clear");
    printf("enter any two numbers: ");
    scanf("%hu %hu", &a, &b);
    n = 1; //'n' for number of bits to be shifted
    c = a&b;
    printf("%d Bitwise-AND %d is %d\n",a,b,c);

    d = a|b;
    printf("%d Bitwise-OR %d is %d\n",a,b,d);

    e = ~a;
    printf("Bitwise-NOT of %d is %d\n",a,e);

    printf("enter number of bits to be shifted: ");
    scanf("%d",&n);

    f = a>>n;
    printf("bitwise right shift of %d by %d is %d\n",a,n,f);

    g = a<<n;
    printf("bitwise left shift of %d by%d is %d\n",a,n,g);

    h = a^b;
    printf("bitwise-XOR of %d and %d is %d\n",a,b,h);

    return 0;


}