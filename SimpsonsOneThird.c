#include<stdio.h>
#include<math.h>

float fu(float x)
{
    return(1.0/x);
}
void main()
{

    float x0,xn,h,sum=0,sum1,sum2,sum3,ans;
    int i,n;
    printf("\nEnter the upper and lower limit of integral:");
    scanf("%f %f",&xn,&x0);
    printf("Enter the number of interval:");
    scanf("%d",&n);
    h=(xn-x0)/n;
    sum1=fu(x0)+fu(xn);
    for(i=1;i<=(n-1);i++)
    {
        if(i%2==0)
        {
            sum2=sum2+fu(x0+i*h);
        }
        else
            {
            sum3=sum3+fu(x0+i*h);
        }
    }
    ans=(h/3)*(sum1+4*sum3+2*sum2);
    printf("\n Required integral value is:%f",ans);
   
}
