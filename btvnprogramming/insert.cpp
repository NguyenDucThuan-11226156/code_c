#include<stdio.h>
void insert(int array[],int position, int value,int n);
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
    printf("Enter the position you want to insert:");
    int position;
    scanf("%d",&position);
    printf("Enter the value you want to insert:");
    int value;
    scanf("%d",&value);
    insert(array,position,value,n);
    printf("Elenments: ");
    for (int i =0; i< n+1;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}

void insert(int array[],int position, int value,int n)
{
    for(int i= n-1;i >= position-1;--i)
    {
        array[i+1] = array[i];
    }
    array[position-1]= value;
}
    