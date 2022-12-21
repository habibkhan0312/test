#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=7; i<=150; i++ ){

            for(int j=2; j<=i-1; j++){
                if(i%j==0){
                    c++;
                    break;
                }

            }
            if(c==0)
                //printf("%d ",i);

                  c=0;

return i;
        }

}
int main()
{
    int c=0,n;
   int prime_number = prime(n);
    printf("%d ",prime_number);

     for(int i=1; i<=1500; i++ ){

            for(int j=2; j<=i-1; j++){
                if(i%j==0){
                    c++;
                    break;
                }

            }
            if(c==0)
                   continue;
                  c=0;



        if(i==0){
            continue;
        }
        //printf("%d ",i);
     }
  }

