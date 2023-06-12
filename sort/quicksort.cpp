#include<stdio.h>

int partition(int a[],int l,int r)
{   int i = l;
    int j= r; 
    int pivot = a[(i+j)/2];
    while( i<=j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if (i<=j)
        {
            int temp = a[i];
            a[i]= a[j];
            a[j]= temp;
            i++;
            j--;
        }
    }
    return i;
}
void quicksort( int a[], int l, int r)
{
    int i = partition(a,l,r);
    if (i<r){
        quicksort(a,i,r);
    }
    if (l<i-1)
    {
        quicksort(a,l,i-1);
    }
    
}
int main()
{
    printf("Nhap so phan tu");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Nhap cac phan tu:");
    for ( int i =0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }
    int l=0, r=n-1;
    quicksort(a,l,r);
    printf("Cac phan tu sap xep:");
    for(int i = 0; i<n;++i)
    {
        printf("%d\n",a[i]);
    }
}