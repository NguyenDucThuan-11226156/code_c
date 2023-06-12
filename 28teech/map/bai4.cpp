#include<bits/stdc++.h>
using namespace std;

int a[1000];

map<int,int> mp;

void solve(int n)
{
    for(int i =1; i <= sqrt(n);i++)
    {
        if (n%i==0)
        {
            mp[i]++;
            if(i != n/i)
            {
                mp[n/i]++;
            }
        }
    }
}
int main()
{
    int TC; cin>>TC;

    while(TC--)
    {   map<int,int> mp;
        int n; cin>>n;
        for(int i = 0 ; i<n;i++)
        {   

            cin>>a[i];
            mp[a[i]]++;
        }
        int res = 0 ;
        for ( auto x:mp)
        {
            res = max(res,x.second);
        }
        cout << n-res << endl;
        

    }
    return 0; 
    }
    
    
    