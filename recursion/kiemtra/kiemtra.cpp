#include<stdio.h>
void store_array(int array[],int n);
void print_array(int array[],int n);



int main(){
    int n;
    printf("Enter the number of an array:");
    scanf("%d",n);
    int array[n];
    store_array(array,n);
    print_array(array,n);


    return 0;
}

void store_array(int array[],int n)
{
    for(int i =0; i<n; ++i)
    {
        scanf("%d",&array[i]);
    }
    
}
void print_array(int array[],int n)
{
    printf("Enter %d elenments for the array: ",n);
    for (int i =0; i< n;i++)
    {
        printf("%d\n",array[i]);
    }
}

