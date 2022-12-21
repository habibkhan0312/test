#include<stdio.h>
int main()
{
    int num,i,c=0;

    printf("enter a any number",num);
    scanf("%d",&num);

    for(i=2; i<=num-1; i++)
    {
        if(i%num==0)
        {
            printf("not prime number %d",num);
            c++;
        }
        if(c==1)
            printf("Prime number %d",num);
    }
}
