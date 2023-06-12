#include<bits/stdc++.h>
using namespace std; 
// bai toan 2 con tro
int main()
{
     int t ; cin >>t ; 
     while(t--)
    {
        int n,x; cin>>n>>x;
        int a[n];
        for ( auto &x:a)
        {
            cin>>x;
        }
        int left = 0; 
        int sum = 0;
        int res = 1e9;
        int right;
        for (  right = 0 ; right < n; ++ right)
        {
            sum += a[right];
            while(sum > x )
            {
                res = min(res , right-left + 1 );
                sum -=a[left];
                left++;
            }
        }
        if ( res == 1e9) 
        {
            cout<<"-1";

        }
        else 
        {
            cout<<res<<endl;
        }
    }
    return 0;
}