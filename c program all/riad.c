#include<stdio.h>
int main()
{
    float x=2.4,a=7.4;
    int y=8,sum;

    sum=x+a%3*(int)(x+y)%2;//4;

    printf("%d",sum);

}
