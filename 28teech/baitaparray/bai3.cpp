#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        cout<< "Enter the number:"<<endl;
        int n;cin>>n;
        int a[n];
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }
        int res = 10000;
        for(int i =0 ; i<n ; i++)
        {
            for (int j = i+1 ; j<n ; j++)
            {
                res = min(res, max(a[i],a[j]) - min(a[i],a[j]));
            }
        }
        cout<< res<< endl;
    }
    return 0;
}