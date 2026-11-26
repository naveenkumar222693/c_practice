#include <stdio.h>

int main()
{
   int x,y,z;
   int*p1,*p2,*p3;
   p1=&x;
   p2=&y;
   p3=&z;
  printf("enter the numbers: ");
   scanf("%d %d",p1,p2);
   *p3=(*p1)+(*p2);
   printf("%d",(*p3));

    return 0;
}
