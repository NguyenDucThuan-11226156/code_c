#include<stdio.h>
void bubblesort(int* array, int n,int (*compare)(int,int))
{
    for (int i = 0 ; i<n; ++i)
    {
        for ( int j=0; j<n-1;++j)
        {
            if (compare(array[j],array[j+1])>0)
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]= temp;
            }
        }
    }
}
int compare(int a , int b)
{
    if(a>b) 
    {
        return -1;
    }
    return 1;
}
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
    
    bubblesort(array,n,compare);
    printf("Remaining Elenments: ");
    for (int i =0; i< n;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}


