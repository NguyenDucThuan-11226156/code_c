#include<stdio.h>
void Fib(int *fib, int n);
int main(){
    int n;
    
    printf("Enter the number of elements in Fibonacci list:");
    scanf("%d",&n);
    int fib[n];
    Fib(fib,n);
    printf("Fibonacci list:");
    for(int i=0; i<n ; ++i)
    {
        printf("%d\n",fib[i]);
    }
}

void Fib(int *fib, int size)
{
    fib[0]=0;
    fib[1]=1;
    for ( int i =2; i<size;++i)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

}