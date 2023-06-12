#include<stdio.h>
void bubblesort(int* array, int n);
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
    
    bubblesort(array,n);
    printf("Remaining Elenments: ");
    for (int i =0; i< n;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
void bubblesort(int* array, int n)
{
    for (int i = 0 ; i<n; ++i)
    {
        for ( int j=0; j<n-1;++j)
        {
            if (array[j]<array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]= temp;
            }
        }
    }
}

