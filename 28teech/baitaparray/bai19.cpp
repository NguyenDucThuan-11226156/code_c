#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k ; cin>>n>>k;
    int a[n];
    for(auto &x:a)
    {
        cin>>x;
    }
    multiset<int> mts;
    long long ans = 0 ;
    int l = 0 ; int r;
    
    for (r = 0 ; r< n; r++)
    {   
        mts.insert(a[r]);
        while(*mts.rbegin() - *mts.begin()> k)
        {
            auto it = mts.find(a[l]); 
            mts.erase(it);
            l++;            
        }
        ans += r-l+1;
    }
    cout<<ans<<endl;

}