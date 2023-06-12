#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{   
    int n , x ; cin >>n>>x ;
    int a[n];
    for ( int &x:a)
    {
        cin>>x;
    }
    if (binary_search(a,a+n,x))
    {
        cout<<"Found!";
    }
    else 
    {
        cout << "Not found";
    }
    return 0;
}