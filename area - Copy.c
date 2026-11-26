#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    system("clear");
    printf("enter the sides of triangle: \n");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of the given triangle is %.2f\n",area);
    return 0;


}
