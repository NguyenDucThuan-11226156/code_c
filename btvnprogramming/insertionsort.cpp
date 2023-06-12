#include<stdio.h>
void insertionsort(int* array, int n);
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
    
    insertionsort(array,n);
    printf("Remaining Elenments: ");
    for (int i =0; i< n;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}

void insertionsort(int* array, int n)
{
    for (int i =1; i <n;++i)
    {
        int d=i;
        while(d>0 && array[d-1]>array[d])
        {
            int temp = array[d-1];
            array[d-1]=array[d];
            array[d]=temp;
            d--;
        }
    }
}