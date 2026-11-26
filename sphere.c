#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float radius,volume;
    system("clear");
    printf("enter the radius of sphere: ");
    scanf("%f",&radius);
    volume = (4.0/3.0)*(22.0/7.0)*pow(radius,3);
    printf("volume of sphere is %.2f\n",volume);
    return 0;
    
}
