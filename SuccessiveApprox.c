#include<stdio.h>
#include<math.h>

float g(float x)
{
    return((exp(-x)+1)/2);
}
void main()
{
    float x1,x2,g1,g2,e=0.00001;
    printf("Enter value of x1:\n");
    scanf("%f",&x1);
    x2=g(x1);
    while(fabs(x2-x1)>e)
    {
        x1=x2;
        x2=g(x1);
    }
    printf("The real root is:%f",x2);
}
