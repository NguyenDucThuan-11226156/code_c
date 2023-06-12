#include<math.h>
using namespace std;
using ll =long long;

#include<bits/stdc++.h>

int cnt[1001];
void ktao()
{
    memset(cnt,0,sizeof(cnt));
    int fib[20];
     fib[0]= 0;
     fib[1]= 1;
    for (int i =2; i<=19;i++)
    {
        fib[i]= fib[i-1]+fib[i-2];
    }
    for (int i =0; fib[i]<=1000;i++)
    {
        cnt[fib[i]] = 1;
    }
}

int main()
{    ktao();
   
    int TC; cin>> TC;
    while(TC--)
    {
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for ( int i=0;i<n;i++)
    {
        if(cnt[a[i]])
        {
            cout<< a[i]<<" "; 
        }
    }
    cout<<endl;
    }
}