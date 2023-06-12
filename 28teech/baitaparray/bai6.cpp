#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll =long long;
const int MOD = 100000007;
int main()
{
    int TC; cin>> TC;
    while(TC--)
    {
       int n,x; cin>>n>>x;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }       
        ll heso=1; 
        ll tong =0 ;
        for ( int i=n-1;i>=0;i--)
        {
            tong += a[i] * heso;
            // tong %= MOD;
            heso *= x;
            // heso %= MOD;

        }
        cout<< tong <<endl;


    }
    return 0;
}