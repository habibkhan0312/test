#include<stdio.h>
int main()
{
    char ch;
    int num;
    scanf("%c ",&ch);
    scanf("%d",&num);

    if((ch>=97 || ch<=104) && (num>=1 || num<=16))
    {
        if(ch%2==1 || num%2==1)
        {
            printf("black");
        }
        else
        {
            printf("white");
        }
        if(ch%2==0 || num%2==0)
        {
            printf("white");
        }
        else
        {
            printf("black");
        }

    }
    return 0;
}

    /*if(amount<=100)
    {
        tb=amount+(amount*(amount/100))+15;
        printf("%d ",tb);
    }
    if(amount>100 || amount<200)
    {
        amount<
    }

}



















/*#include <stdio.h>

void main()
{
float x,sum,no_row;
int i,n;
printf("Input the value of x :");
scanf("%f",&x);
printf("Input number of terms : ");
scanf("%d",&n);
sum =1; no_row = 1;
for (i=1;i<n;i++)
{
  no_row = no_row*x/(float)i;
  printf("%lf \n",no_row);
  sum =sum+ no_row;
  printf("tytyt%lf ",sum);

}
printf("\nThe sum  is : %f\n",sum);
}/*#include<stdio.h>
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
    int x,n,fact,a;
    double sum;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum=0;
    for(int j=0; j<=n; j++)
    {
        int fact= factor(j);

        sum =sum +((((double)(pow(x,j)))/fact));

        //why can't print single sum? help me
    }
    printf("%f\t\n",sum);
    return 0;
}


    /*int row,i,j,k;
    scanf("%d", &row);
    for (i=1; i<=(2*row)-1; i++)
    {
        if (i <= row)
        {
            for (j=1; j<=(row-i); j++)
            {
                printf(" ");
            }
            for (j= 1; j <= 2*i- 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j =1; j <= i%row; j++)
            {
                printf(" ");
            }
            k = row-i%row;
            for (j = 1; j <=2*k-1; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }
    return 0;
}*/

