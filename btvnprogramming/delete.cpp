#include<stdio.h>
void deletes(int* array, int n, int position);
int main()
{  int n;
    printf("Enter the number of an array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elenments for the array: ",n);
    for ( int i =0; i< n;++i)
    {
        scanf("%d",&array[i]);   
    }
    printf("Enter the position you want to delete:");
    int position;
    scanf("%d",&position);
    deletes(array,n,position);
    printf("Remaining Elenments: ");
    for (int i =0; i< n-1;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
void deletes(int * array, int n, int position)
{
    for( int i =position-1 ; i<n;i++)
    {
        array[i]=array[i+1];
    }
}