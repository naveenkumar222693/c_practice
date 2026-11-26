#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ 
    int a,b,c,dirc;
    float root1,root2;
    printf("enter the non zero co efficients of the quadratic eqn: ");
    scanf("%d %d %d",&a ,&b, &c);
    dirc = b*b -4*a*c;

    NEXT:
    if(a==0||b==0||c==0)
    { 
        printf("!!! invalid co efficients ,enter the non zero co efficients !!!");
        goto NEXT;
    }

    if(dirc>0)
    { 
        root1 = (-b+sqrt(dirc)/(2*a));
        root2 = (-b-sqrt(dirc)/(2*a));
        printf("the roots are real and distinct");
        printf("\n root1 = %.2f",root1);
        printf("\n root2 = %.2f",root2);
    }
    else if(dirc==0)
    { 
        root1 = root2 = -b/(2*a);
        printf("the roots are real and equal");
        printf("\n root1 = root2 = %.2f",root1);
    }
        else
        { 
            printf("the roots are imaginary");

        }

        return 0;
}