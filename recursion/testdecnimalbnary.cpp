#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int fib(int num)
{
   if (num<2)
   { 
    return 1;
   }
   else 
   {
    return fib(num-1)+fib (num-2);
   }
}
int main()
{ int i;
    printf("Enter the elenment of Fib:");
    int num;
    scanf("%d",&num);
    
    int result = fib(num);

    printf("%d",result);
}