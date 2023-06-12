#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//10 3
// 1 2 3 3 3 3 4 5 6 9
int  first_pos_2( int a[], int n , int x)
{
    int l = 0 ; 
    int r = n-1;
    int res = -1;
    while ( l <= r )
    {
        int m = (l+r)/2;
        if (a[m] == x){
            res = m; 
            r = m-1;
        }
        else if ( a[m]<x)
        {
            l = m+1;
        }
        else 
        {
            r = m-1;
        }
    }
    return a[res-1];
}
int  first_pos( int a[], int n , int x)
{
    int l = 0 ; 
    int r = n-1;
    int res = -1;
    while ( l <= r )
    {
        int m = (l+r)/2;
        if (a[m] == x){
            res = m; 
            r = m-1;
        }
        else if ( a[m]<x)
        {
            l = m+1;
        }
        else 
        {
            r = m-1;
        }
    }
    return res;
}
// int  last_pos( int a[], int n , int x)
// {
//     int l = 0 ; 
//     int r = n-1;
//     int res = -1;
//     while ( l <= r )
//     {
//         int m = (l+r)/2;
//         if (a[m] == x){
//             res = m; 
//             l = m+1;
//         }
//         else if ( a[m]<x)
//         {
//             l = m+1;
//         }
//         else 
//         {
//             r = m-1;
//         }
//     }
//     return res;
// }

// int  last_pos( int a[], int n , int x)
// {
//     int l = 0 ; 
//     int r = n-1;
//     int res = -1;
//     while ( l <= r )
//     {
//         int m = (l+r)/2;
//         if (a[m] == x){
//             res = m; 
//             l = m+1;
//         }
//         else if ( a[m]<x)
//         {
//             l = m+1;
//         }
//         else 
//         {
//             r = m-1;
//         }
//     }
//     return a[res];
// }
int main()
{   int n, x ; cin >>n >> x;
    int a[n];
    for (int &i:a)
    {
        cin>>i;
    }
    int number = first_pos_2(a,n,x);

    cout<< first_pos(a,n,number)<<endl;

    return 0;
}