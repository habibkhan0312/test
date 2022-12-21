#include <bits/stdc++.h>
using namespace std;
bool prime( int num){

    for( int i=2; i<num; i++){
        if(num % i == 0)
            return false;

    return true;
    }

}
int main()
{
    int x,c=0;
    for (int i= 1; i<100; i++){
            if(i>=7){
        bool prime_number= prime(i);
        if(prime_number){
           x= i;
        }

        if(i%x==0){
          continue;
        }
        }

 cout<< i << " ";
}
}
