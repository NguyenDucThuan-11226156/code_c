// tim so segment de > s
#include<bits/stdc++.h>
using namespace std;
// tim so segment de < s
int main()
{
    int n,s ; cin>>n>>s;
    int a[n];
    for(auto &x:a)
    {
        cin>>x;
    }
    int right =0; int left = 0;
    int cnt = 0;
    int sum=0;
    for ( right= 0 ; right< n ; ++right)
    {
        sum += a[right];
        while(sum>s){
            cnt += n-right;
            sum -=a[left]; left ++;
        }
    }
    cout<<cnt<<endl;








}