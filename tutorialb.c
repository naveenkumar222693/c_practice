#include<stdio.h>
/*this states that the program is using the standard input output library
 which contains functions like printf and scanf */
int main()
{

printf("hello \nworld\n");
int age = 18;
printf ("my age is %d\n",age);
float pi = 3.14;
printf("the value of pi is %f\n",pi);

float num1;
printf("enter a real number:",num1);
scanf("%f",&num1);
printf("the real number is %f",num1);

int a,b;
printf("enter a: \n");
scanf("%f",&a);
 printf("enter b: \n");
 scanf("%f",&b);

 int rem  = a % b;
 printf("the value of result is %f",rem);
 

return 0;
}