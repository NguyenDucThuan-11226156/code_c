#include<stdio.h>
#include<stdlib.h>
void printfhelloworld()
{
    printf("Hello World\n");
}
int *Add(int* a, int* b)

{      int*c =(int*)malloc(sizeof(int));
       *c= (*a)+(*b);
      return c;
}

int main()
{
    
    int a=2,b=4;
    int *ptr= Add(&a,&b);
    // printfhelloworld();
    printf("Sum=%d\n",*ptr);
}


