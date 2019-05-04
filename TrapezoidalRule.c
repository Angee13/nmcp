#include<stdio.h>
#include<math.h>

float fu(float x)
{
    return 1 / (1 + x * x);
}
void main()
{

    float x0,xn,h,sum=0,ans;
    int i,n;
    printf("\nEnter the upper and lower limit of integral:");
    scanf("%f %f",&xn,&x0);
    printf("Enter the number of interval:");
    scanf("%d",&n);
    h=(xn-x0)/n;
    for(i=1;i<=(n-1);i++)
    {
        sum=sum+fu(x0+i*h);
    }
    ans=(h/2)*(fu(x0)+fu(xn)+2*sum);
    printf("\n Required integral value is:%f",ans);

}


