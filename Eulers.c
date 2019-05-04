#include<stdio.h>
#include<conio.h>
#include<math.h>

float fu(float x,float y)
{
    return(x+y);
}
void main()
{
    int i=0;
    float x0,y0,x1,y1,xn,h;
    printf("Enter x0:");
    scanf("%f",&x0);
     printf("Enter y0:");
    scanf("%f",&y0);
     printf("Enter xn:");
    scanf("%f",&xn);
    printf("Enter h:");
    scanf("%f",&h);

    while(x0<=xn)
    {
       //printf("x0: %f; xn: %f\n", x0, xn+1);
       y1=y0+(h*fu(x0,y0));
       x1=x0+h;
       x0=x1; y0=y1;
       i++;
       printf("Required approximate value when x(%d)=%f,\t then y(%d)=%f\n",i,x1,i,y1);
    }
}
