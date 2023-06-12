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
    int right =0; int left = 0;
    int cnt = 0;
    long long ans = 0;
    int dem[100001]={0};
    for ( right= 0 ; right< n ; ++right)
    {
        dem[a[right]]++;
        if(dem[a[right]]==1) ++cnt;
        while(cnt>k)
        {
            if(dem[a[left]]==1) --cnt;
            dem[a[left]]--;left++;
        }
        ans +=right-left+1;
    }
    
    cout<<ans<<endl;

    return 0;






}