#include<stdio.h>
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
    int n,fact;

    scanf("%d",&n);
   for(int j=1; j<=n; j++)
    {
         int fact= factor(j);
         printf("%d\t",fact);

    }
    return 0;
}

