#include<stdio.h>
int main()
{
    int i,j;
    for(i=100; i<=200; i++)
    {
      for(j=2; j<=i-1; j++)
      {
          if(i%j==0)
          {
              printf("%d\t",i);
              break;
          }

      }

    }
}
