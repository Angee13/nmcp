#include<stdio.h>
#include<math.h>

float fu(float x)
{
    return(pow(x,3)-4*x+1);
}
void main()
{
    float x,x1,x2,e=0.00001;
    float f1,f2,f;
    printf("Enter value of x1:\n");
    scanf("%f",&x1);
    printf("Enter value of x2:\n");
    scanf("%f",&x2);
    x=(x1+x2)/2;
    f1=fu(x1);
    f2=fu(x2);
    f=fu(x);
    while(fabs(x2-x1)>e)
    {
        if(f1*f>0)
        {
            x1=x;
        }
        else
        {
             x2=x;
        }
         x=(x1+x2)/2;
         f1=fu(x1);
    f2=fu(x2);
    f=fu(x);
        }
        printf("The real root is:%f",x);
    }
