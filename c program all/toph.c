#include<stdio.h>
#include<math.h>
int main()
{
    int x,count=0,a,b,c;
    scanf("%d",&x);
    count=(x==0)?1:log10(x)+1;
    if(x<200000000){

    if(count==0){
            a=0;
            b=0;
            c=0;
    }
    else if(count==1){
            a=x;
            b=0;
            c=0;
    }
   else if(count==2){
            a=x/10;
            b=x%10;
            c=0;
   }
   else if(count==3){
            a=(x/100);
            b=(x/10)%10;
            c=x%10;
   }
    else if(count==4){
            a=x/1000;
            b=(x/100)%10;
            c=x%100;
    }
     else if(count==5){
            a=x/10000;
            b=(x/100)%100;
            c=x%100;
    }
     else if(count==6){
            a=x/10000;
            b=(x/100)%100;
            c=x%100;
    }
     else if(count==7){
            a=x/1000000;
            b=(x/1000)%1000;
            c=x%1000;
    }
     else if(count==8){
            a=x/1000000;
            b=(x/1000)%1000;
            c=x%1000;
    }
     else if(count==9){
            a=x/1000000;
            b=(x/1000)%1000;
            c=x%1000;
    }
   printf("%d,%d,%d",a,b,c);

    }
    else
        printf("the limit of number is 200000000...!");
}
