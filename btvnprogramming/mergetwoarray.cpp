#include<stdio.h>
void mergetwoarray(int *array3, int*array1,int *array2, int n, int m);

int main()
{  int n;
    printf("Enter the number of an array 1:");
    scanf("%d",&n);
    int array1[n];
    printf("Enter %d elenments for the array: ",n);
    for ( int i =0; i< n;++i)
    {
        scanf("%d",&array1[i]);   
    }

    int m;
    printf("Enter the number of an array 2:");
    scanf("%d",&m);
    int array2[m];
    printf("Enter %d elenments for the array: ",m);
    for ( int i =0; i< m;++i)
    {
        scanf("%d",&array2[i]);   
    }

    int array3[m+n];
    printf("Array3:");
    mergetwoarray(array3 , array1,array2,  n,  m);
    for(int i=0; i<m+n;++i)
    {
        printf("%d\n",array3[i]);
    }
    return 0;

}


void mergetwoarray(int *array3, int*array1,int *array2, int n, int m)
{
        for ( int i = 0 ; i< n;++i)
    {
        array3[i]= array1[i];
    }
    for ( int i = 0; i<m;++i)
    {
        array3[n+i]= array2[i];
    }
}