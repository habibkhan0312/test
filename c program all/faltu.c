#include<stdio.h>
int main()
{
    int amount,num1000,num500,num100,num50,num20,num10,num5,num2,num1;

    printf("Enter your amount:");
    scanf("%d",&amount);

    if(amount>=1000)
    {
     num1000=amount/1000;
     printf("1000=%d pice\n",num1000);
     amount-=num1000*1000;
    }

    if(amount>=500)
    {
        num500=(amount/500);
        printf("500=%d pice\n",num500);
        amount-=num500*500;
    }
     if(amount>=100)
    {
        num100=(amount/100);
        printf("100=%d pice\n",num100);
        amount-=num100*100;
    }
     if(amount>=50)
    {
        num50=(amount/50);
        printf("50=%d pice\n",num50);
        amount-=num50*50;
    }
     if(amount>=20)
    {
        num20=(amount/20);
        printf("20=%d pice\n",num20);
        amount-=num20*20;
    }
     if(amount>=10)
    {
        num10=(amount/10);
        printf("10=%d pice\n",num10);
        amount-=num10*10;
    }
     if(amount>=5)
    {
        num5=(amount/5);
        printf("5=%d pice\n",num5);
        amount-=num5*5;
    }
     if(amount>=2)
    {
        num2=(amount/2);
        printf("2=%d pice\n",num2);
        amount-=num2*2;
    }
     if(amount>=1)
    {
        num1=(amount/1);
        printf("1=%d pice\n",num1);
        amount-=num1*1;
    }
}
