#include<stdio.h>
void get_input()
void min_max(int array[], int n);
void mean( int array[],int n);
void second_smallest(int array[],int n);
void printLongestIncreasingSubarray(int array[], int length); 
void print_array( int array[], int n);
void get_input()
{
    int n;
    printf("Enter the number of an array(n<100):");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elenments for the array: ",n);
    for ( int i =0; i< n;++i)
    {
        scanf("%d",&array[i]);   
    }
}
int main()
{   get_input()
    print_array(array,n);
    min_max(array,n);
    mean(array,n);
    second_smallest( array,n);
    printLongestIncreasingSubarray( array, n); 
}
void print_array( int array[], int n)
{
    printf("Elements in array:");
    for (int i =0; i< n;i++)
    {
        printf("%d\n",array[i]);
    }
}


void min_max(int array[],int n)
{
    int maxs = array[0];
    for ( int i = 0 ; i< n ;++i)
    {
        if (maxs<= array[i])
        {
            maxs = array[i];
        }
    }
    printf("Max:%d\n",maxs);

    int mins = array[0];
    for ( int i = 0 ; i< n ;++i)
    {
        if (mins>= array[i])
        {
            mins = array[i];
        }
    }
    printf("min:%d",mins);
}

void mean( int array[],int n)
{
    float sum = 0;
    for (int i=0;i<n;++i)
    {
        sum += array[i];
    }
    float mean_value = sum / n;

    printf("\nMean value:%.1f",mean_value);
}

void second_smallest(int array[],int n)
{
    int second_smallest = 0;
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
    second_smallest = array[1];
    printf("\nSecond smalles value:%d",second_smallest);
    

}
void sub_array(int array[],int n)
{
     int start=0; int end =0; int maxstart= 0; int maxend = 0;
     int len = 1; int max_len=1;

     for(int i =0; i<n;++i)
     {

        if (array[i] > array[i-1])
        {
            len++;
            end =i;
        }
        else 
        {
            if (len>max_len)
            {
                max_len = len;
                maxstart = start;
                maxend = end;
            }
            start =i;
            len = 1;
        }

     }
     if (len>max_len)
            {
                max_len = len;
                maxstart = start;
                maxend = end;
            }
            printf("\nLongest continuous increasing subarray: ");
    for (int i = maxStart; i <= maxEnd; i++) {
        printf("%d ", arr[i]);
    }
}









void printLongestIncreasingSubarray(int arr[], int length) {
    int start = 0, end = 0, maxStart = 0, maxEnd = 0;
    int len = 1, maxLength = 1;

    for (int i = 1; i < length; i++) {
        if (arr[i] > arr[i - 1]) {
            len++;
            end = i;
        } else {
            if (len > maxLength) {
                maxLength = len;
                maxStart = start;
                maxEnd = end;
            }
            len = 1;
            start = i;
        }
    }

    if (len > maxLength) {
        maxLength = len;
        maxStart = start;
        maxEnd = end;
    }

    printf("\nLongest continuous increasing subarray: ");
    for (int i = maxStart; i <= maxEnd; i++) {
        printf("%d ", arr[i]);
    }
}