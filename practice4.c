#include<stdio.h>
#include<stdlib.h>
int main()
{
    float real_number;
    int whole_number,right_digit;
    system("clear");
    printf("\nenter a real number: ");
    scanf("%f",&real_number);
    whole_number=real_number;
    right_digit=whole_number%10;
    printf("\nthe right most digit of the realnumber %.2f\n is %d\n",real_number,right_digit);
    return 0;

}