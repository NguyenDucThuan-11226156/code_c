#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll =long long;

#include<bits/stdc++.h>

int main()
{
    int TC ; cin>>TC;
    while(TC--)
    {
        int n; 
        cin >>n ;
        int a[n];

        int res= -100000;
        for(int i =0; i<n;++i)
        {
            cin>>a[i];
        }
        for(int i =0; i<n;++i)
        {
            for (int j=i+1;j<n;j++)
            {
                res = max(res,a[j]-a[i]);

            }
        }
        cout<<res<<endl;

    }
}