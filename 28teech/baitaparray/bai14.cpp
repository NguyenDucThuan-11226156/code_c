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
    int length = 1;
    int length_max =1;
    int left = 0;
    int right ;
    for (int right = 0 ; right< n ;++right)
    {
        sum +=a[right];
        while(sum>s)
    {
        sum -=a[left];
        left++;
    }    
    length = right - left +1;
    length_max = max(length_max,length);

    }
    cout<<length_max<<endl;
    return 0;

}