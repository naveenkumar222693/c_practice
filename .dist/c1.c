#include<stdio.h>
struct complex{
    int real;
    int imaginary;
    
};

int main()
{
    struct complex c1,c2,c3;
    printf("enter the real and imaginary parts of c1: ");
    scanf("%d %d",&c1.real,&c1.imaginary);

     printf("enter the real and imaginary parts of c2: ");
    scanf("%d %d",&c2.real,&c2.imaginary);

    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
     
    printf("the sum of two complex nmber c1 and c2 is given by c3 is : ");
    printf("%d+%di",c3.real,c3.imaginary);
    return 0;

}