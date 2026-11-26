#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,disc;
    float root1,root2;
    system("clear");
    label:
    printf("\nenter non zero coefficients a,b,and c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0)//(a*b*c==0)
    {
        printf("!!! invalid coeffiecients,re-enter non zero coeffiecients: ");
        goto label;
    }

    disc=b*b-4*a*c;
    if(disc>=0)
    {
        if(disc>0)
        {
            root1=-b+sqrt(disc)/(2*a);
            root2=-b-sqrt(disc)/(2*a);
            printf("roots are real and distinct\n");
                printf("\n root1=%.2f\n",root1);
                printf("\n root2=%.2f\n",root2);
        } 
        else
        {
            root1=root2=-b/(2*a);
            printf("\n roots are real and equal\n");
            printf("\nroot1=%.2f",root1);
            printf("\n root2=%.2f",root2);

        }       
    }
    else
    {
        printf("\n the roots are imaginary\n");

    }
    return 0;
}