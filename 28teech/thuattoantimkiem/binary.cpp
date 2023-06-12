#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
// bool bs(int a[], int n, int x)
// {
//     int l = 0 ; int r = n-1
//     while (l<= r)
//     {
//         int m = (l+r) / 2 ;
//         if (a[m]== x)
//         {
//             return true;
//         }
//         else if (a[m]<x)
//         {
//             l = m+1;
//         }
//         else 
//         {
//             r = m-1;
//         }
//     }
//     return false;
// }

// bool bs_2(int a[], int l, int r, int x)
// {
//     if (l>r)
//     {
//         return false;
//     }
//     int m = (l+r)/ 2;
//     if ( a[m]==x)
//     {
//         return true;
//     }
//     else if ( a[m]<x)
//     {
//         return bs_2(a, m+1,r,  x)
//     }
//     else 
//     {
//         return bs_2(a, l, m-1, x)

//     }
// }

int main()
{   
    int n , x ; cin >>n>>x ;
    int a[n];
    for ( &x:a)
    {
        cin x;
    }
    if (binary_search(a,a+n,x))
    {
        count<<"Found!";
    }
    else 
    {
        cout << "Not found";
    }
    return 0;
}