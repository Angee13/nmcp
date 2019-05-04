#include<stdio.h>
#include<math.h>
void main()
{
    float x[20],y[20],product,sum=0;
    float xn;
    int i,j,n;
    printf("\nEnter the number of points:");
    scanf("%d",&n);
    printf("Enter the independent variable values :\n");
  for (i = 0; i < n; i++)
    scanf("%f", &x[i]);
    printf("Enter the dependent variable values :\n");
  for (i = 0; i < n; i++)
        scanf("%f", &y[i]);  
    printf("\n Enter the value of x for which y=f(x) is required:");
    scanf("%f",&xn);
    for(i=0;i<n;i++)
        {
            product =1;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    product=product*(xn-x[j])/(x[i]-x[j]);
                }  
                
            }
            sum=sum+product*y[i];
        }
        printf("\n Required solution is %f",sum);
    
}
