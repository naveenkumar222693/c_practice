#include<stdio.h>
#include<stdlib.h>
int main()
{
    float real_number,decimal_part;
    int whole_number;
    system("clear");
    printf("\nenter a real number: ");
    scanf("%f",&real_number);
    whole_number=real_number;
    decimal_part=real_number-whole_number;
    printf("\nthe decimal part is %.2f and the integral part is %d of a real number %.2f\n",decimal_part,whole_number,real_number);
    
    return 0;

}