#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;

    printf("enter a any number :");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
      r=temp%10;
      sum=sum+r;
      temp=temp/10;
    }
    printf("sum=%d\n",sum);
    if(sum%2==0)
    {
        printf(" sum of digits is even number");
    }
    else
        printf("sum of digits is odd number");
}
