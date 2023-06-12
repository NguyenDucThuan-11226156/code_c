#include<stdio.h>
#include<stdlib.h>
int main(){
  

    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *A= (int*)malloc(n*sizeof(int));
    // int A[n];
    for (int i =0; i<n;++i)
    {
        A[i] = i+1;
    }
    // free(A);
    int *B = (int*)realloc(A,n*2*sizeof(int));
    printf("%d\n",B);
    printf("%d\n",A);

      for (int i =0; i<n;++i)
    {
        printf("%d\n",A[i]);
    }
    return 0;

}