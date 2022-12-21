#include<bits/stdc++.h>
using namespace std;
int big_mod(int base, int power, int mod)
{
    if(power==0)    return 1;

    else if(power%2==1)
    {
        int r1 = base % mod;
        int r2 = (big_mod(base,power-1,mod))%mod;
        return (r1*r2)%mod;
    }
    else if(power%2==0)
    {
        int r1 = (big_mod(base,power/2,mod))%mod;
        return (r1*r1)%mod;
    }
}
int main()
{
    int base,power,mod,r;
   cin>> base>> power>> mod;
    r = big_mod(base,power,mod);
    cout<< r;
    main();
}
