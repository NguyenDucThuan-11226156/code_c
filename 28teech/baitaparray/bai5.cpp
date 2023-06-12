#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll =long long;
int cnt[1000001];
int main()
{
    int TC; cin>> TC;
    while(TC--)
    {
       int n; cin>>n;
       int a[n];
       memset(cnt, 0 , sizeof(cnt));
       for (int i =0; i<n;i++)
       {
        cin>> a[i];
        cnt[a[i]] ++;
       }
       int ans =0; 
       for (int i =0; i< n;++i)
       {
        if (cnt[a[i]]>=2) ans++;
       }
       cout<<ans<<endl;

    }
}