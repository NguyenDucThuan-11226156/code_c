#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int TC; cin>>TC;
    while(TC--)
    {
        int n; cin>>n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        vector<int>v(a,a+n);
        sort(v.begin(),v.end());
        for(int i =0;i<n;i++)
        {
            auto it = upper_bound(v.begin(),v.end(),a[i]);
            if (it == v.end())
            {
                cout<<"_"<<" ";
            }
            else
            {
                cout<<*it<<" ";
            }
        }

    }
    return 0;
}