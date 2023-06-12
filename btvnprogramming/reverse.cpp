#include<stdio.h>
void reverse(int array[], int n);
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
    reverse(array,n);
    printf("Elenments: ");
    for (int i =0; i< n;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}

void reverse(int* array, int n)
{
    for (int i = 0; i< n/2;++i)
    {   int t;
        t=array[i];
        array[i] = array[n-1-i];
        array[n-1-i]=t;
    }
}