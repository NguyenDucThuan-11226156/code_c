#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, x ; cin>>n>>x;
    vector<int> a(n);
    for (int i =0 ;i<n; ++i)
    {
        cin>>a[i];

    }
    auto it = upper_bound(a.begin(),a.end(),x);
    if (it==a.end())
    {
        cout<<"Khong co phan tu nao lon hon "<<x<<endl;
    }
}