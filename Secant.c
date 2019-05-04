#include<stdio.h>
#include<math.h>

float fu(float x)
{
    return(exp(-x)-x);
}
void main()
{
    float x3,x1,x2,e=0.00001;
    float f1,f2;
    printf("Enter value of x1:\n");
    scanf("%f",&x1);
    printf("Enter value of x2:\n");
    scanf("%f",&x2);
    x3=(x1*fu(x2)-x2*fu(x1))/(fu(x2)-fu(x1));
    while(fabs(x2-x1)>e)
        {
            x1=x2;
            x2=x3;
            x3=(x1*fu(x2)-x2*fu(x1))/(fu(x2)-fu(x1));
        }
        printf("The real root is:%f",x3);

}
