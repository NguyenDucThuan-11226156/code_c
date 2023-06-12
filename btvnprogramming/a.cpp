/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void insertionsort( int array[], int n);
int main()
{
    int n;
    printf("Nhap n:"); scanf("%d",&n);
    int array[n];
    for( int i =0; i<n;++i)
    {
        scanf("%d",&array[i]);
    }
    insertionsort(array,n);
    printf("Sorted list:");
    for(int i =0;i< n;++i)
    {
        printf("%d\n",array[i]);
    }
    return 0;
    
}
void insertionsort( int array[], int n)
{
    for ( int i = 1; i <n; ++i)
    {
        int d=i;
        while(d>0 && array[i]>array[i+1])
        {
            int temp= array[i];
            array[i]= array[i+1];
            array[i+1]= temp;
            d--;
        }
    }
}
