
#include <stdio.h>
struct std
{
    char name[20];
    int usn;
};

int main()
{
    int i;
   struct std s[3];
   
   printf("enter the name and usn of stds: ");
   for(i=0;i<3;i++)
   {
   scanf("%s\n %d",s[i].name,&s[i].usn);
   }
   for(i=0;i<3;i++)
   {
          printf("Name is: %s\nUsn: %d\n",s[i].name,s[i].usn);
   }
   
    return 0;
}
