#include<stdio.h>

int sumofvalue(int n)
{
    if (n <=1)
    {
        return n;
    }
    else
    {
        return sumofvalue(n-1)+(n);
    }
}
int main(){


    int n;
    printf("Nhap so n:"); scanf("%d",&n);
    int total = sumofvalue(n);
    printf("Total = %d",total);
}