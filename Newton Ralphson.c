#include<stdio.h>
#include<math.h>

float f(float x)
{
    return(pow(x,4)-x-10);
}
float fd(float x)
{
    return(4*pow(x,3)-1);
}
void main()
{
    float x1,x2,e=0.00001;
    printf("Enter the guess value\n");
    scanf("%f",&x1);
    x2=x1-(f(x1)/fd(x1));
    while(fabs(x2-x1)>e)
    {
        x1=x2;
        x2=x1-(f(x1)/fd(x1));
    }
    printf("The real root is:%f",x2);
}
