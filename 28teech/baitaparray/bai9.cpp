#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll =long long;

#include<bits/stdc++.h>

int main()
{
    int TC ; cin>>TC;
    while(TC--)
    {
        int n,k; cin>>n>>k;
        float a[n];
        float sum = 0; 
        int idx = 0;
        for (int i =0; i<n;i++)
        {
            cin>>a[i];
        }
        for (int i =0; i < k; ++i)
        {   
            sum += a[i];
        }
        int res = sum;
        for ( int i= k; i< n;i++)
        {
            sum = sum -a[i-k] + a[i];
            if (sum > res)
            {
                res = sum;
                idx = i-k +1;
            }
        }
        for (int i =0 ; i<k;i++)
        {
            cout<<a[idx+i]<<" ";
        }

    }
}