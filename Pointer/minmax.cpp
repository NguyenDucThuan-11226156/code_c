#include<stdio.h>
void findminmax(int *array, int size, int *max_value, int *min_value)
{
    *min_value= array[0];
    *max_value= array[0];
    for ( int i=1; i< size;++i)
    {
        if(array[i]>*max_value)
        {
            *max_value = array[i];
        }
    }
     for ( int i=1; i< size;++i)
    {
        if(array[i]<*min_value)
        {
            *min_value = array[i];
        }
    }
}
int main()
{
    int number;
    int max_value, min_value;
    printf("Enter the number of elements: "); scanf("%d", &number);

    int array[number];  
    for (int i =0; i<number;++i)
    {
        scanf("%d",array+i);
    }
    findminmax(array, number,&max_value, &min_value);
    printf("Max:%d\n", max_value);
    printf("Min:%d", min_value);
    return 0;
}

