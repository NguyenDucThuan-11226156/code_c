#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void Selectionsort(int a[], int n) // O n^2
{
    for (int i =0 ; i<n-1;++i)
    {
        int min_pos =i;
        for ( int j = i+1 ; j <n;j++)
        {
            if(a[j]<a[min_pos])
            {
                min_pos = j;
            }
        }
        swap(a[i],a[min_pos]);
    }
}

void BubbleSort(int a[], int n)
{
    for ( int i = n; i >0  ;--i)
    {
        for (int j = 0; j<n ;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
void insertionsort(int a[], int n)
{
    for ( int i = 1 ; i< n ; ++i)
    {
        int pos = i;
        while(pos>0 && (a[pos-1] >a[pos]))
        {
            swap(a[pos-1],a[pos]);
            pos--;
        }
    }
}

int main()
{
    int n; cin>>n;int a[n]; 
    for (int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    insertionsort(a,n);
    for (int i=0; i<n;++i)
    {
        cout<<a[i]<<endl;
    }
}