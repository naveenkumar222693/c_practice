#include<stdio.h>
#include<stdlib.h>
int main()
{
   unsigned short int a,b,c,d,e,f,g,h,n;
   system("clear");
   printf("\nenter any two numbers: ");
   scanf("%hu %hu",&a,&b);
   c=a&b;
   printf("\n%d BITWISE AND %d is %d\n",a,b,c);
   d=a|b;
   printf("\n%d BITWISE OR %d is %d\n",a,b,d);
   e=~a ;
   printf("\n BITWISE NOT of %d is %d\n",a,e);
    printf("\n enter the number of bits to be shifted: ");
    scanf("%hu",&n);
    f=a>>n;
    printf("\n BITWISE RIGHT SHIFT of %d by %d bits is %d\n",a,n,f);
    g=a<<n;
    printf("\n BITWISE LEFT SHIFT of %d by %d bits is %d\n",a,n,g);
    h=a^b;
    printf("\n %d BITWISE XOR %d is %d\n",a,b,h);
    return 0;

}