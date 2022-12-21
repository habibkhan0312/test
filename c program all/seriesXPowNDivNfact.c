#include<stdio.h>
#include<math.h>
int factor(int n)
{
    int factx=1;
    for(int i=1; i<=n; i++)
    {
        factx *=i;
    }
    return factx;
}
int main()
{
    int x,n,sum,fact,a;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int j=0; j<=n; j++)
    {
        sum=0;
        int fact= factor(j);

        double sum =sum +((((double)(pow(x,j)))/fact));

        //why can't print single sum? help me
       printf("%f\t\n",sum);
    }
    return 0;
}

