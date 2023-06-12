#include<bits/stdc++.h>
using namespace std;
int main()
{   int n, m; cin>>n>>m;
    int a[n];
    int b[m];
    for(auto &x:a) 
    {
        cin>>x;
    }
    for(auto &x:b) 
    {
        cin>>x;
    }
    int i =0; 
    int j = 0;
    while(i<n && j < m )
    {
        if (a[i]<b[j])
        {
            i++;
        }
        else 
        {
            cout<<i<<" ";
            j++;
        }
    }
    while(j<m)
    {
        cout<<i<<" ";
        j++;
    }

    return 0;
}