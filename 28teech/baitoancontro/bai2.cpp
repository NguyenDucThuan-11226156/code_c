#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin>>n>>m;
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
    int i=0;
    int j=0;
    
    int ans = 0;
    while ( i <n && j < m)
    {
        if(a[i]<b[j])
        {
            i++; 
        }
        if (a[i]>b[j])
        {
            j++; 
        }
        int dem1=0;
            int dem2=0;
        while(i<n && a[i]==b[j])
        {
            i++;
            dem1++;
        }
        int tmp = a[i-1];
        while(j< m && tmp == b[j])
        {
            dem2++;
            j++;
        }
        ans += dem1*dem2;
        

    }
    cout<<ans<<endl;
}