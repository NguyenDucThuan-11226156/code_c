#include<stdio.h>
void findmin(int*array,int n);
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
    findmin(array,n);
    
    return 0;
}
void findmin(int *array,int n)
{   int mins = array[0];
    for ( int i = 0 ; i< n ;++i)
    {
        if (mins>= array[i])
        {
            mins = array[i];
        }
    }
    printf("min:%d",mins);
}