#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s ; cin>>n>>s;
    int a[n];
    for(auto &x:a)
    {
        cin>>x;
    }
    int sum = 0 ;
    int length ;
    int length_min =1e9;
    int left = 0;
    int right ;
    bool ok = true;
    for (int right = 0 ; right< n ;++right)
    {
        sum +=a[right];
        while(sum>=s)
    {
        sum -=a[left];
        length = right - left +1;

        length_min = min(length_min,length);


        left++;
    }    

    }
    if ( length_min == 1e9)
    {
        cout<<"-1"<<endl;
    }
    else{
    cout<<length_min<<endl;

    }

    
    return 0;    
    }

