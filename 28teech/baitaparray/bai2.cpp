#include<bits/stdc++.h>

using namespace std;
using ll =long long;

int main()
{   cout<< "Enter total case:" << endl;
    int TC ; cin>> TC;
    while(TC--){
        map<ll,int > mp;
        cout<<"Enter the number of elements:"<<endl;
        int n; cin>>n;
        for (int i =0; i<n;i++)
        {
            ll x; cin>> x;
             if (x>0 ) mp[x] = 1;
        }
        for (int i = 1 ; i< 1000001; i++)
        {
            if (mp[i] != 1)
            {
                cout<< i<< endl;
                break;
            }
        }

    }
}