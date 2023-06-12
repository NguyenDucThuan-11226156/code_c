#include<stdio.h>
void findmax(int*array,int n);
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
    findmax(array,n);
    
    return 0;
}
void findmax(int *array,int n)
{   int maxs = array[0];
    for ( int i = 0 ; i< n ;++i)
    {
        if (maxs<= array[i])
        {
            maxs = array[i];
        }
    }
    printf("Max:%d",maxs);
}