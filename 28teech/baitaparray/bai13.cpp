#include<bits/stdc++.h>
using namespace std; 
int main()
{   int t ; cin>>t; 
    while(t--)
    {   int n; cin>>n;
        int a[n];
        for ( auto &x:a)
        {
            cin>>x;
        }
        int cnt = 0;
        for(int i =1 ; i <n; i++)
        {
            if (a[i-1]>a[i])
            {
                cnt += (a[i-1]-a[i]);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}